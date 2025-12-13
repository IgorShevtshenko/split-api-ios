#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SplitApiConsumptionRequestDTO, SplitApiConsumptionRequestDTOCompanion, SplitApiConsumptionRequestDTOTimeDTO, SplitApiConsumptionRequestDTOTimeDTOCompanion, SplitApiCreateMedicineRequestDTO, SplitApiCreateMedicineRequestDTOCompanion, SplitApiCreateMedicineResponseDTOErrorBusinessError, SplitApiCreateMedicineResponseDTOErrorGeneral, SplitApiCreateMedicineResponseDTOSuccess, SplitApiDayOfWeek, SplitApiEmptyResponseCompanion, SplitApiHTTPMethod, SplitApiKotlinAbstractCoroutineContextElement, SplitApiKotlinAbstractCoroutineContextKey<B, E>, SplitApiKotlinArray<T>, SplitApiKotlinByteArray, SplitApiKotlinByteIterator, SplitApiKotlinCancellationException, SplitApiKotlinEnum<E>, SplitApiKotlinEnumCompanion, SplitApiKotlinException, SplitApiKotlinIllegalStateException, SplitApiKotlinKTypeProjection, SplitApiKotlinKTypeProjectionCompanion, SplitApiKotlinKVariance, SplitApiKotlinNothing, SplitApiKotlinRuntimeException, SplitApiKotlinThrowable, SplitApiKotlinUnit, SplitApiKotlinx_coroutines_coreCoroutineDispatcher, SplitApiKotlinx_coroutines_coreCoroutineDispatcherKey, SplitApiKotlinx_io_coreBuffer, SplitApiKotlinx_serialization_coreSerialKind, SplitApiKotlinx_serialization_coreSerializersModule, SplitApiKtor_client_coreHttpClient, SplitApiKtor_client_coreHttpClientCall, SplitApiKtor_client_coreHttpClientCallCompanion, SplitApiKtor_client_coreHttpClientConfig<T>, SplitApiKtor_client_coreHttpClientEngineConfig, SplitApiKtor_client_coreHttpReceivePipeline, SplitApiKtor_client_coreHttpReceivePipelinePhases, SplitApiKtor_client_coreHttpRequestBuilder, SplitApiKtor_client_coreHttpRequestBuilderCompanion, SplitApiKtor_client_coreHttpRequestData, SplitApiKtor_client_coreHttpRequestPipeline, SplitApiKtor_client_coreHttpRequestPipelinePhases, SplitApiKtor_client_coreHttpResponse, SplitApiKtor_client_coreHttpResponseContainer, SplitApiKtor_client_coreHttpResponseData, SplitApiKtor_client_coreHttpResponsePipeline, SplitApiKtor_client_coreHttpResponsePipelinePhases, SplitApiKtor_client_coreHttpSendPipeline, SplitApiKtor_client_coreHttpSendPipelinePhases, SplitApiKtor_client_coreProxyConfig, SplitApiKtor_eventsEventDefinition<T>, SplitApiKtor_eventsEvents, SplitApiKtor_httpContentType, SplitApiKtor_httpContentTypeCompanion, SplitApiKtor_httpHeaderValueParam, SplitApiKtor_httpHeaderValueWithParameters, SplitApiKtor_httpHeaderValueWithParametersCompanion, SplitApiKtor_httpHeadersBuilder, SplitApiKtor_httpHttpMethod, SplitApiKtor_httpHttpMethodCompanion, SplitApiKtor_httpHttpProtocolVersion, SplitApiKtor_httpHttpProtocolVersionCompanion, SplitApiKtor_httpHttpStatusCode, SplitApiKtor_httpHttpStatusCodeCompanion, SplitApiKtor_httpOutgoingContent, SplitApiKtor_httpURLBuilder, SplitApiKtor_httpURLBuilderCompanion, SplitApiKtor_httpURLProtocol, SplitApiKtor_httpURLProtocolCompanion, SplitApiKtor_httpUrl, SplitApiKtor_httpUrlCompanion, SplitApiKtor_utilsAttributeKey<T>, SplitApiKtor_utilsGMTDate, SplitApiKtor_utilsGMTDateCompanion, SplitApiKtor_utilsMonth, SplitApiKtor_utilsMonthCompanion, SplitApiKtor_utilsPipeline<TSubject, TContext>, SplitApiKtor_utilsPipelinePhase, SplitApiKtor_utilsStringValuesBuilderImpl, SplitApiKtor_utilsTypeInfo, SplitApiKtor_utilsWeekDay, SplitApiKtor_utilsWeekDayCompanion, SplitApiNetworkResponseCompanion, SplitApiNetworkResponseErrorBusiness, SplitApiNetworkResponseErrorCompanion, SplitApiNetworkResponseErrorGeneral, SplitApiNetworkResponseSuccess<T>, SplitApiNetworkResponseSuccessCompanion, SplitApiScheduleOptionDTO, SplitApiScheduleOptionDTOCompanion, SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTO, SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTOCompanion, SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTO, SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTOCompanion, SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTO, SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTOCompanion, SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO, SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTOCompanion, SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTO, SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTOCompanion;

@protocol SplitApiCreateMedicineResponseDTO, SplitApiCreateMedicineResponseDTOError, SplitApiEndpointConfiguration, SplitApiKotlinAnnotation, SplitApiKotlinAutoCloseable, SplitApiKotlinComparable, SplitApiKotlinContinuation, SplitApiKotlinContinuationInterceptor, SplitApiKotlinCoroutineContext, SplitApiKotlinCoroutineContextElement, SplitApiKotlinCoroutineContextKey, SplitApiKotlinFunction, SplitApiKotlinIterator, SplitApiKotlinKAnnotatedElement, SplitApiKotlinKClass, SplitApiKotlinKClassifier, SplitApiKotlinKDeclarationContainer, SplitApiKotlinKType, SplitApiKotlinMapEntry, SplitApiKotlinSequence, SplitApiKotlinSuspendFunction2, SplitApiKotlinx_coroutines_coreChildHandle, SplitApiKotlinx_coroutines_coreChildJob, SplitApiKotlinx_coroutines_coreCoroutineScope, SplitApiKotlinx_coroutines_coreDisposableHandle, SplitApiKotlinx_coroutines_coreJob, SplitApiKotlinx_coroutines_coreParentJob, SplitApiKotlinx_coroutines_coreRunnable, SplitApiKotlinx_coroutines_coreSelectClause, SplitApiKotlinx_coroutines_coreSelectClause0, SplitApiKotlinx_coroutines_coreSelectInstance, SplitApiKotlinx_io_coreRawSink, SplitApiKotlinx_io_coreRawSource, SplitApiKotlinx_io_coreSink, SplitApiKotlinx_io_coreSource, SplitApiKotlinx_serialization_coreCompositeDecoder, SplitApiKotlinx_serialization_coreCompositeEncoder, SplitApiKotlinx_serialization_coreDecoder, SplitApiKotlinx_serialization_coreDeserializationStrategy, SplitApiKotlinx_serialization_coreEncoder, SplitApiKotlinx_serialization_coreKSerializer, SplitApiKotlinx_serialization_coreSerialDescriptor, SplitApiKotlinx_serialization_coreSerializationStrategy, SplitApiKotlinx_serialization_coreSerializersModuleCollector, SplitApiKtor_client_coreHttpClientEngine, SplitApiKtor_client_coreHttpClientEngineCapability, SplitApiKtor_client_coreHttpClientPlugin, SplitApiKtor_client_coreHttpRequest, SplitApiKtor_httpHeaders, SplitApiKtor_httpHttpMessage, SplitApiKtor_httpHttpMessageBuilder, SplitApiKtor_httpParameters, SplitApiKtor_httpParametersBuilder, SplitApiKtor_ioByteReadChannel, SplitApiKtor_ioCloseable, SplitApiKtor_ioJvmSerializable, SplitApiKtor_utilsAttributes, SplitApiKtor_utilsStringValues, SplitApiKtor_utilsStringValuesBuilder, SplitApiMedicineGateway, SplitApiNetworkClient, SplitApiNetworkResponse, SplitApiNetworkResponseError, SplitApiSessionIdProvider;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SplitApiBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SplitApiBase (SplitApiBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SplitApiMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SplitApiMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSplitApiKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SplitApiNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SplitApiByte : SplitApiNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SplitApiUByte : SplitApiNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SplitApiShort : SplitApiNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SplitApiUShort : SplitApiNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SplitApiInt : SplitApiNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SplitApiUInt : SplitApiNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SplitApiLong : SplitApiNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SplitApiULong : SplitApiNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SplitApiFloat : SplitApiNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SplitApiDouble : SplitApiNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SplitApiBoolean : SplitApiNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("MedicineGateway")))
@protocol SplitApiMedicineGateway
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createMedicineRequest:(SplitApiCreateMedicineRequestDTO *)request completionHandler:(void (^)(id<SplitApiCreateMedicineResponseDTO> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createMedicine(request:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumptionRequestDTO")))
@interface SplitApiConsumptionRequestDTO : SplitApiBase
- (instancetype)initWithAmount:(double)amount time:(SplitApiConsumptionRequestDTOTimeDTO *)time __attribute__((swift_name("init(amount:time:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiConsumptionRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiConsumptionRequestDTO *)doCopyAmount:(double)amount time:(SplitApiConsumptionRequestDTOTimeDTO *)time __attribute__((swift_name("doCopy(amount:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) SplitApiConsumptionRequestDTOTimeDTO *time __attribute__((swift_name("time")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumptionRequestDTO.Companion")))
@interface SplitApiConsumptionRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiConsumptionRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumptionRequestDTO.TimeDTO")))
@interface SplitApiConsumptionRequestDTOTimeDTO : SplitApiBase
- (instancetype)initWithHours:(int32_t)hours minutes:(int32_t)minutes __attribute__((swift_name("init(hours:minutes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiConsumptionRequestDTOTimeDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiConsumptionRequestDTOTimeDTO *)doCopyHours:(int32_t)hours minutes:(int32_t)minutes __attribute__((swift_name("doCopy(hours:minutes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConsumptionRequestDTO.TimeDTOCompanion")))
@interface SplitApiConsumptionRequestDTOTimeDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiConsumptionRequestDTOTimeDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMedicineRequestDTO")))
@interface SplitApiCreateMedicineRequestDTO : SplitApiBase
- (instancetype)initWithStartDate:(NSString *)startDate endDate:(NSString * _Nullable)endDate timeZone:(NSString *)timeZone scheduleOption:(SplitApiScheduleOptionDTO *)scheduleOption __attribute__((swift_name("init(startDate:endDate:timeZone:scheduleOption:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiCreateMedicineRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiCreateMedicineRequestDTO *)doCopyStartDate:(NSString *)startDate endDate:(NSString * _Nullable)endDate timeZone:(NSString *)timeZone scheduleOption:(SplitApiScheduleOptionDTO *)scheduleOption __attribute__((swift_name("doCopy(startDate:endDate:timeZone:scheduleOption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable endDate __attribute__((swift_name("endDate")));
@property (readonly) SplitApiScheduleOptionDTO *scheduleOption __attribute__((swift_name("scheduleOption")));
@property (readonly) NSString *startDate __attribute__((swift_name("startDate")));
@property (readonly) NSString *timeZone __attribute__((swift_name("timeZone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMedicineRequestDTO.Companion")))
@interface SplitApiCreateMedicineRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiCreateMedicineRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("CreateMedicineResponseDTO")))
@protocol SplitApiCreateMedicineResponseDTO
@required
@end

__attribute__((swift_name("CreateMedicineResponseDTOError")))
@protocol SplitApiCreateMedicineResponseDTOError <SplitApiCreateMedicineResponseDTO>
@required
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SplitApiKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SplitApiKotlinEnum<E> : SplitApiBase <SplitApiKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMedicineResponseDTOErrorBusinessError")))
@interface SplitApiCreateMedicineResponseDTOErrorBusinessError : SplitApiKotlinEnum<SplitApiCreateMedicineResponseDTOErrorBusinessError *> <SplitApiCreateMedicineResponseDTOError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SplitApiCreateMedicineResponseDTOErrorBusinessError *invalidTimeInterval __attribute__((swift_name("invalidTimeInterval")));
+ (SplitApiKotlinArray<SplitApiCreateMedicineResponseDTOErrorBusinessError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiCreateMedicineResponseDTOErrorBusinessError *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMedicineResponseDTOErrorGeneral")))
@interface SplitApiCreateMedicineResponseDTOErrorGeneral : SplitApiBase <SplitApiCreateMedicineResponseDTOError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)general __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiCreateMedicineResponseDTOErrorGeneral *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMedicineResponseDTOSuccess")))
@interface SplitApiCreateMedicineResponseDTOSuccess : SplitApiBase <SplitApiCreateMedicineResponseDTO>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiCreateMedicineResponseDTOSuccess *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DayOfWeek")))
@interface SplitApiDayOfWeek : SplitApiKotlinEnum<SplitApiDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SplitApiDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) SplitApiDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SplitApiDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SplitApiDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SplitApiDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) SplitApiDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SplitApiDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (SplitApiKotlinArray<SplitApiDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ScheduleOptionDTO")))
@interface SplitApiScheduleOptionDTO : SplitApiBase
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.Companion")))
@interface SplitApiScheduleOptionDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SplitApiKotlinArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineCyclicalScheduleRequestDTO")))
@interface SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTO : SplitApiScheduleOptionDTO
- (instancetype)initWithConsumeDurationInDays:(int32_t)consumeDurationInDays pauseDurationInDays:(int32_t)pauseDurationInDays consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("init(consumeDurationInDays:pauseDurationInDays:consumptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTO *)doCopyConsumeDurationInDays:(int32_t)consumeDurationInDays pauseDurationInDays:(int32_t)pauseDurationInDays consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("doCopy(consumeDurationInDays:pauseDurationInDays:consumptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t consumeDurationInDays __attribute__((swift_name("consumeDurationInDays")));
@property (readonly) NSArray<SplitApiConsumptionRequestDTO *> *consumptions __attribute__((swift_name("consumptions")));
@property (readonly) int32_t pauseDurationInDays __attribute__((swift_name("pauseDurationInDays")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineCyclicalScheduleRequestDTOCompanion")))
@interface SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCreateMedicineCyclicalScheduleRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDailyScheduleRequestDTO")))
@interface SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTO : SplitApiScheduleOptionDTO
- (instancetype)initWithConsumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("init(consumptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTO *)doCopyConsumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("doCopy(consumptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SplitApiConsumptionRequestDTO *> *consumptions __attribute__((swift_name("consumptions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDailyScheduleRequestDTOCompanion")))
@interface SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCreateMedicineDailyScheduleRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDaysOfTheWeekScheduleRequestDTO")))
@interface SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTO : SplitApiScheduleOptionDTO
- (instancetype)initWithDaysOfTheWeekConsumptions:(NSArray<SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO *> *)daysOfTheWeekConsumptions __attribute__((swift_name("init(daysOfTheWeekConsumptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTO *)doCopyDaysOfTheWeekConsumptions:(NSArray<SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO *> *)daysOfTheWeekConsumptions __attribute__((swift_name("doCopy(daysOfTheWeekConsumptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO *> *daysOfTheWeekConsumptions __attribute__((swift_name("daysOfTheWeekConsumptions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDaysOfTheWeekScheduleRequestDTOCompanion")))
@interface SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO")))
@interface SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO : SplitApiBase
- (instancetype)initWithDays:(NSSet<SplitApiDayOfWeek *> *)days consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("init(days:consumptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTO *)doCopyDays:(NSSet<SplitApiDayOfWeek *> *)days consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("doCopy(days:consumptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SplitApiConsumptionRequestDTO *> *consumptions __attribute__((swift_name("consumptions")));
@property (readonly) NSSet<SplitApiDayOfWeek *> *days __attribute__((swift_name("days")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTOCompanion")))
@interface SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCreateMedicineDaysOfTheWeekScheduleRequestDTODaysOfTheWeekConsumptionsRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineEveryFewScheduleRequestDTO")))
@interface SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTO : SplitApiScheduleOptionDTO
- (instancetype)initWithInterval:(int32_t)interval consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("init(interval:consumptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTOCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTO *)doCopyInterval:(int32_t)interval consumptions:(NSArray<SplitApiConsumptionRequestDTO *> *)consumptions __attribute__((swift_name("doCopy(interval:consumptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SplitApiConsumptionRequestDTO *> *consumptions __attribute__((swift_name("consumptions")));
@property (readonly) int32_t interval __attribute__((swift_name("interval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleOptionDTO.CreateMedicineEveryFewScheduleRequestDTOCompanion")))
@interface SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTOCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiScheduleOptionDTOCreateMedicineEveryFewScheduleRequestDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyResponse")))
@interface SplitApiEmptyResponse : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SplitApiEmptyResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyResponse.Companion")))
@interface SplitApiEmptyResponseCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiEmptyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("EndpointConfiguration")))
@protocol SplitApiEndpointConfiguration
@required
- (NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("headers()")));
- (SplitApiKtor_httpUrl *)urlPath:(NSString *)path queryItems:(NSDictionary<NSString *, NSString *> *)queryItems __attribute__((swift_name("url(path:queryItems:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HTTPMethod")))
@interface SplitApiHTTPMethod : SplitApiKotlinEnum<SplitApiHTTPMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SplitApiHTTPMethod *get __attribute__((swift_name("get")));
@property (class, readonly) SplitApiHTTPMethod *post __attribute__((swift_name("post")));
@property (class, readonly) SplitApiHTTPMethod *put __attribute__((swift_name("put")));
@property (class, readonly) SplitApiHTTPMethod *delete_ __attribute__((swift_name("delete_")));
+ (SplitApiKotlinArray<SplitApiHTTPMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiHTTPMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("NetworkClient")))
@protocol SplitApiNetworkClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeMethod:(SplitApiHTTPMethod *)method path:(NSString *)path queryItems:(NSDictionary<NSString *, NSString *> *)queryItems body:(id _Nullable)body responseSerializer:(id<SplitApiKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(id<SplitApiNetworkResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(method:path:queryItems:body:responseSerializer:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("NetworkResponse")))
@protocol SplitApiNetworkResponse
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseCompanion")))
@interface SplitApiNetworkResponseCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiNetworkResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SplitApiKotlinArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<SplitApiKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("NetworkResponseError")))
@protocol SplitApiNetworkResponseError <SplitApiNetworkResponse>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseErrorBusiness")))
@interface SplitApiNetworkResponseErrorBusiness : SplitApiBase <SplitApiNetworkResponseError>
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (SplitApiNetworkResponseErrorBusiness *)doCopyCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseErrorCompanion")))
@interface SplitApiNetworkResponseErrorCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiNetworkResponseErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SplitApiKotlinArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseErrorGeneral")))
@interface SplitApiNetworkResponseErrorGeneral : SplitApiBase <SplitApiNetworkResponseError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)general __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiNetworkResponseErrorGeneral *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseSuccess")))
@interface SplitApiNetworkResponseSuccess<T> : SplitApiBase <SplitApiNetworkResponse>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiNetworkResponseSuccessCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiNetworkResponseSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResponseSuccessCompanion")))
@interface SplitApiNetworkResponseSuccessCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiNetworkResponseSuccessCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SplitApiKotlinArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<SplitApiKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((swift_name("SessionIdProvider")))
@protocol SplitApiSessionIdProvider
@required
- (NSString * _Nullable)sessionId __attribute__((swift_name("sessionId()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MedicineGatewayImpl")))
@interface SplitApiMedicineGatewayImpl : SplitApiBase <SplitApiMedicineGateway>
- (instancetype)initWithNetworkClient:(id<SplitApiNetworkClient>)networkClient __attribute__((swift_name("init(networkClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createMedicineRequest:(SplitApiCreateMedicineRequestDTO *)request completionHandler:(void (^)(id<SplitApiCreateMedicineResponseDTO> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createMedicine(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndpointConfigurationImpl")))
@interface SplitApiEndpointConfigurationImpl : SplitApiBase <SplitApiEndpointConfiguration>
- (instancetype)initWithApiUrl:(NSString *)apiUrl sessionIdProvider:(id<SplitApiSessionIdProvider>)sessionIdProvider __attribute__((swift_name("init(apiUrl:sessionIdProvider:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("headers()")));
- (SplitApiKtor_httpUrl *)urlPath:(NSString *)path queryItems:(NSDictionary<NSString *, NSString *> *)queryItems __attribute__((swift_name("url(path:queryItems:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkClientImpl")))
@interface SplitApiNetworkClientImpl : SplitApiBase <SplitApiNetworkClient>
- (instancetype)initWithClient:(SplitApiKtor_client_coreHttpClient *)client endpointConfiguration:(id<SplitApiEndpointConfiguration>)endpointConfiguration __attribute__((swift_name("init(client:endpointConfiguration:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeMethod:(SplitApiHTTPMethod *)method path:(NSString *)path queryItems:(NSDictionary<NSString *, NSString *> *)queryItems body:(id _Nullable)body responseSerializer:(id<SplitApiKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(id<SplitApiNetworkResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(method:path:queryItems:body:responseSerializer:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkClientKt")))
@interface SplitApiNetworkClientKt : SplitApiBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)post:(id<SplitApiNetworkClient>)receiver path:(NSString *)path completionHandler:(void (^)(id<SplitApiNetworkResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(_:path:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)post:(id<SplitApiNetworkClient>)receiver path:(NSString *)path body:(id)body completionHandler:(void (^)(id<SplitApiNetworkResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(_:path:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)post:(id<SplitApiNetworkClient>)receiver path:(NSString *)path body:(id)body responseSerializer:(id<SplitApiKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(id<SplitApiNetworkResponse> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(_:path:body:responseSerializer:completionHandler:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SplitApiKotlinThrowable : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SplitApiKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SplitApiKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SplitApiKotlinException : SplitApiKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SplitApiKotlinRuntimeException : SplitApiKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SplitApiKotlinIllegalStateException : SplitApiKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SplitApiKotlinCancellationException : SplitApiKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SplitApiKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SplitApiKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SplitApiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SplitApiKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SplitApiKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SplitApiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SplitApiKotlinx_serialization_coreKSerializer <SplitApiKotlinx_serialization_coreSerializationStrategy, SplitApiKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SplitApiKotlinEnumCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SplitApiKotlinArray<T> : SplitApiBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SplitApiInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SplitApiKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol SplitApiKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SplitApiKtor_httpUrl : SplitApiBase <SplitApiKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) SplitApiKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SplitApiKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SplitApiKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) SplitApiKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SplitApiKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SplitApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol SplitApiKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SplitApiKtor_ioCloseable <SplitApiKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SplitApiKtor_client_coreHttpClient : SplitApiBase <SplitApiKotlinx_coroutines_coreCoroutineScope, SplitApiKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SplitApiKtor_client_coreHttpClientEngine>)engine userConfig:(SplitApiKtor_client_coreHttpClientConfig<SplitApiKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SplitApiKtor_client_coreHttpClient *)configBlock:(void (^)(SplitApiKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SplitApiKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SplitApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SplitApiKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SplitApiKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SplitApiKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SplitApiKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SplitApiKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SplitApiKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SplitApiKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SplitApiKotlinx_serialization_coreEncoder
@required
- (id<SplitApiKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SplitApiKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SplitApiKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SplitApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SplitApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SplitApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SplitApiKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SplitApiKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SplitApiKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SplitApiKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SplitApiKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SplitApiKotlinx_serialization_coreDecoder
@required
- (id<SplitApiKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SplitApiKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SplitApiKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SplitApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SplitApiKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SplitApiKtor_httpUrlCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SplitApiKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SplitApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SplitApiKtor_httpParameters <SplitApiKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SplitApiKtor_httpURLProtocol : SplitApiBase <SplitApiKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SplitApiKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SplitApiKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SplitApiKotlinCoroutineContextElement> _Nullable)getKey:(id<SplitApiKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SplitApiKotlinCoroutineContext>)minusKeyKey:(id<SplitApiKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SplitApiKotlinCoroutineContext>)plusContext:(id<SplitApiKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SplitApiKtor_client_coreHttpClientEngine <SplitApiKotlinx_coroutines_coreCoroutineScope, SplitApiKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SplitApiKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SplitApiKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SplitApiKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SplitApiKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SplitApiKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SplitApiKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SplitApiKtor_client_coreHttpClientEngineConfig : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SplitApiKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SplitApiKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SplitApiKtor_client_coreHttpClientConfig<T> : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SplitApiKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SplitApiKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SplitApiKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SplitApiKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SplitApiKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SplitApiKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SplitApiKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SplitApiKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SplitApiKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(SplitApiKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SplitApiKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SplitApiKtor_eventsEvents : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SplitApiKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SplitApiKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SplitApiKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SplitApiKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SplitApiKtor_utilsPipeline<TSubject, TContext> : SplitApiBase
- (instancetype)initWithPhases:(SplitApiKotlinArray<SplitApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SplitApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SplitApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SplitApiKtor_utilsPipelinePhase *)reference phase:(SplitApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SplitApiKtor_utilsPipelinePhase *)reference phase:(SplitApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SplitApiKtor_utilsPipelinePhase *)phase block:(id<SplitApiKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SplitApiKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SplitApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SplitApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SplitApiKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SplitApiKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SplitApiKtor_client_coreHttpReceivePipeline : SplitApiKtor_utilsPipeline<SplitApiKtor_client_coreHttpResponse *, SplitApiKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SplitApiKotlinArray<SplitApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SplitApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SplitApiKtor_client_coreHttpRequestPipeline : SplitApiKtor_utilsPipeline<id, SplitApiKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SplitApiKotlinArray<SplitApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SplitApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SplitApiKtor_client_coreHttpResponsePipeline : SplitApiKtor_utilsPipeline<SplitApiKtor_client_coreHttpResponseContainer *, SplitApiKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SplitApiKotlinArray<SplitApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SplitApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SplitApiKtor_client_coreHttpSendPipeline : SplitApiKtor_utilsPipeline<id, SplitApiKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SplitApiKotlinArray<SplitApiKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SplitApiKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SplitApiKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SplitApiKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SplitApiKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SplitApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SplitApiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SplitApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SplitApiKotlinx_serialization_coreSerializersModule : SplitApiBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SplitApiKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SplitApiKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SplitApiKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SplitApiKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SplitApiKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SplitApiKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SplitApiKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SplitApiKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SplitApiKotlinx_serialization_coreSerialKind : SplitApiBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SplitApiKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SplitApiKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SplitApiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SplitApiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SplitApiKotlinNothing : SplitApiBase
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol SplitApiKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SplitApiKtor_httpURLProtocolCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SplitApiKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SplitApiKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SplitApiKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SplitApiKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SplitApiKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SplitApiKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SplitApiKotlinCoroutineContextElement <SplitApiKotlinCoroutineContext>
@required
@property (readonly) id<SplitApiKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SplitApiKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SplitApiKtor_client_coreHttpRequestData : SplitApiBase
- (instancetype)initWithUrl:(SplitApiKtor_httpUrl *)url method:(SplitApiKtor_httpHttpMethod *)method headers:(id<SplitApiKtor_httpHeaders>)headers body:(SplitApiKtor_httpOutgoingContent *)body executionContext:(id<SplitApiKotlinx_coroutines_coreJob>)executionContext attributes:(id<SplitApiKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SplitApiKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SplitApiKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SplitApiKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SplitApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SplitApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SplitApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SplitApiKtor_client_coreHttpResponseData : SplitApiBase
- (instancetype)initWithStatusCode:(SplitApiKtor_httpHttpStatusCode *)statusCode requestTime:(SplitApiKtor_utilsGMTDate *)requestTime headers:(id<SplitApiKtor_httpHeaders>)headers version:(SplitApiKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SplitApiKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SplitApiKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SplitApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SplitApiKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SplitApiKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SplitApiKotlinAbstractCoroutineContextElement : SplitApiBase <SplitApiKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SplitApiKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SplitApiKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SplitApiKotlinContinuationInterceptor <SplitApiKotlinCoroutineContextElement>
@required
- (id<SplitApiKotlinContinuation>)interceptContinuationContinuation:(id<SplitApiKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SplitApiKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SplitApiKotlinx_coroutines_coreCoroutineDispatcher : SplitApiKotlinAbstractCoroutineContextElement <SplitApiKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SplitApiKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SplitApiKotlinCoroutineContext>)context block:(id<SplitApiKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<SplitApiKotlinCoroutineContext>)context block:(id<SplitApiKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SplitApiKotlinContinuation>)interceptContinuationContinuation:(id<SplitApiKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SplitApiKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SplitApiKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (SplitApiKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SplitApiKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SplitApiKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SplitApiKtor_client_coreProxyConfig : SplitApiBase
- (instancetype)initWithUrl:(SplitApiKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SplitApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SplitApiKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SplitApiKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SplitApiKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SplitApiKtor_utilsAttributeKey<T> : SplitApiBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(SplitApiKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SplitApiKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(SplitApiKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SplitApiKtor_eventsEventDefinition<T> : SplitApiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SplitApiKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SplitApiKtor_utilsPipelinePhase : SplitApiBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SplitApiKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SplitApiKotlinSuspendFunction2 <SplitApiKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SplitApiKtor_client_coreHttpReceivePipelinePhases : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SplitApiKtor_httpHttpMessage
@required
@property (readonly, getter=headers_) id<SplitApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SplitApiKtor_client_coreHttpResponse : SplitApiBase <SplitApiKtor_httpHttpMessage, SplitApiKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SplitApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SplitApiKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) SplitApiKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SplitApiKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SplitApiKotlinUnit : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SplitApiKtor_client_coreHttpRequestPipelinePhases : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SplitApiKtor_httpHttpMessageBuilder
@required
@property (readonly, getter=headers_) SplitApiKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SplitApiKtor_client_coreHttpRequestBuilder : SplitApiBase <SplitApiKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SplitApiKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SplitApiKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SplitApiKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SplitApiKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SplitApiKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SplitApiKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SplitApiKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SplitApiKtor_httpURLBuilder *, SplitApiKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SplitApiKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SplitApiKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly, getter=headers_) SplitApiKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SplitApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SplitApiKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SplitApiKtor_client_coreHttpResponsePipelinePhases : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SplitApiKtor_client_coreHttpResponseContainer : SplitApiBase
- (instancetype)initWithExpectedType:(SplitApiKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SplitApiKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SplitApiKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SplitApiKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SplitApiKtor_client_coreHttpClientCall : SplitApiBase <SplitApiKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SplitApiKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SplitApiKtor_client_coreHttpClient *)client requestData:(SplitApiKtor_client_coreHttpRequestData *)requestData responseData:(SplitApiKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SplitApiKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(SplitApiKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SplitApiKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SplitApiKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SplitApiKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SplitApiKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SplitApiKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SplitApiKtor_client_coreHttpSendPipelinePhases : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SplitApiKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SplitApiKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SplitApiKotlinKClass>)kClass provider:(id<SplitApiKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SplitApiKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SplitApiKotlinKClass>)kClass serializer:(id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SplitApiKotlinKClass>)baseClass actualClass:(id<SplitApiKotlinKClass>)actualClass actualSerializer:(id<SplitApiKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SplitApiKotlinKClass>)baseClass defaultDeserializerProvider:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SplitApiKotlinKClass>)baseClass defaultDeserializerProvider:(id<SplitApiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SplitApiKotlinKClass>)baseClass defaultSerializerProvider:(id<SplitApiKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SplitApiKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SplitApiKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SplitApiKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SplitApiKotlinKClass <SplitApiKotlinKDeclarationContainer, SplitApiKotlinKAnnotatedElement, SplitApiKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SplitApiKtor_httpHttpMethod : SplitApiBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SplitApiKtor_httpHeaders <SplitApiKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SplitApiKtor_httpOutgoingContent : SplitApiBase
- (id _Nullable)getPropertyKey:(SplitApiKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SplitApiKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SplitApiKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SplitApiLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SplitApiKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly, getter=headers_) id<SplitApiKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SplitApiKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SplitApiKotlinx_coroutines_coreJob <SplitApiKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SplitApiKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SplitApiKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SplitApiKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SplitApiKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SplitApiKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SplitApiKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SplitApiKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SplitApiKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SplitApiKotlinx_coroutines_coreJob>)plusOther_:(id<SplitApiKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SplitApiKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SplitApiKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<SplitApiKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SplitApiKtor_httpHttpStatusCode : SplitApiBase <SplitApiKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SplitApiKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (SplitApiKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SplitApiKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SplitApiKtor_utilsGMTDate : SplitApiBase <SplitApiKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SplitApiKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SplitApiKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SplitApiKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (SplitApiKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (SplitApiKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SplitApiKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SplitApiKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SplitApiKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SplitApiKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SplitApiKtor_httpHttpProtocolVersion : SplitApiBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SplitApiKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SplitApiKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SplitApiKotlinAbstractCoroutineContextKey<B, E> : SplitApiBase <SplitApiKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SplitApiKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SplitApiKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SplitApiKotlinx_coroutines_coreCoroutineDispatcherKey : SplitApiKotlinAbstractCoroutineContextKey<id<SplitApiKotlinContinuationInterceptor>, SplitApiKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SplitApiKotlinCoroutineContextKey>)baseKey safeCast:(id<SplitApiKotlinCoroutineContextElement> _Nullable (^)(id<SplitApiKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SplitApiKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SplitApiKtor_utilsTypeInfo : SplitApiBase
- (instancetype)initWithType:(id<SplitApiKotlinKClass>)type kotlinType:(id<SplitApiKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<SplitApiKotlinKClass>)type reifiedType:(id<SplitApiKotlinKType>)reifiedType kotlinType:(id<SplitApiKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SplitApiKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SplitApiKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SplitApiKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(SplitApiBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(SplitApiKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) SplitApiKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<SplitApiKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SplitApiKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SplitApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SplitApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SplitApiKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SplitApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SplitApiKtor_utilsStringValuesBuilderImpl : SplitApiBase <SplitApiKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SplitApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SplitApiKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SplitApiKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SplitApiKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SplitApiMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SplitApiKtor_httpHeadersBuilder : SplitApiKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SplitApiKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SplitApiKtor_client_coreHttpRequestBuilderCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SplitApiKtor_httpURLBuilder : SplitApiBase
- (instancetype)initWithProtocol:(SplitApiKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SplitApiKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SplitApiKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SplitApiKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SplitApiKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property SplitApiKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SplitApiKtor_client_coreHttpClientCallCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SplitApiKtor_client_coreHttpRequest <SplitApiKtor_httpHttpMessage, SplitApiKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SplitApiKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SplitApiKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SplitApiKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SplitApiKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SplitApiKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SplitApiKtor_httpHttpMethodCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SplitApiKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SplitApiKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SplitApiKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SplitApiKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SplitApiKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SplitApiKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SplitApiKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SplitApiKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SplitApiKtor_httpHeaderValueWithParameters : SplitApiBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SplitApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SplitApiKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SplitApiKtor_httpContentType : SplitApiKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SplitApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SplitApiKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SplitApiKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SplitApiKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SplitApiKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SplitApiKotlinx_coroutines_coreChildHandle <SplitApiKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(SplitApiKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<SplitApiKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SplitApiKotlinx_coroutines_coreChildJob <SplitApiKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<SplitApiKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SplitApiKotlinSequence
@required
- (id<SplitApiKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SplitApiKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SplitApiKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SplitApiKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SplitApiKotlinThrowable *, id _Nullable, id<SplitApiKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SplitApiKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SplitApiKotlinx_coroutines_coreSelectClause0 <SplitApiKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SplitApiKtor_httpHttpStatusCodeCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SplitApiKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SplitApiKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SplitApiKtor_utilsWeekDay : SplitApiKotlinEnum<SplitApiKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SplitApiKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SplitApiKotlinArray<SplitApiKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SplitApiKtor_utilsMonth : SplitApiKotlinEnum<SplitApiKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SplitApiKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SplitApiKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SplitApiKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SplitApiKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SplitApiKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SplitApiKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SplitApiKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SplitApiKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SplitApiKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SplitApiKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SplitApiKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SplitApiKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SplitApiKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SplitApiKotlinArray<SplitApiKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SplitApiKtor_utilsGMTDateCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SplitApiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SplitApiKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SplitApiKtor_httpHttpProtocolVersionCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SplitApiKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SplitApiKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SplitApiKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SplitApiKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SplitApiKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol SplitApiKotlinx_io_coreRawSource <SplitApiKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(SplitApiKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol SplitApiKotlinx_io_coreSource <SplitApiKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<SplitApiKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(SplitApiKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SplitApiKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<SplitApiKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SplitApiKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SplitApiKtor_httpURLBuilderCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SplitApiKtor_httpParametersBuilder <SplitApiKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SplitApiKtor_httpHeaderValueParam : SplitApiBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (SplitApiKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SplitApiKtor_httpHeaderValueWithParametersCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SplitApiKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SplitApiKtor_httpContentTypeCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SplitApiKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SplitApiKotlinx_coroutines_coreParentJob <SplitApiKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SplitApiKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SplitApiKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SplitApiKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SplitApiKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SplitApiKtor_utilsWeekDayCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SplitApiKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SplitApiKtor_utilsMonthCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SplitApiKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SplitApiKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SplitApiKotlinKTypeProjection : SplitApiBase
- (instancetype)initWithVariance:(SplitApiKotlinKVariance * _Nullable)variance type:(id<SplitApiKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SplitApiKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SplitApiKotlinKTypeProjection *)doCopyVariance:(SplitApiKotlinKVariance * _Nullable)variance type:(id<SplitApiKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SplitApiKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SplitApiKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SplitApiKotlinByteArray : SplitApiBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SplitApiByte *(^)(SplitApiInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SplitApiKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol SplitApiKotlinx_io_coreRawSink <SplitApiKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(SplitApiKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol SplitApiKotlinx_io_coreSink <SplitApiKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<SplitApiKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<SplitApiKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SplitApiKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SplitApiKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface SplitApiKotlinx_io_coreBuffer : SplitApiBase <SplitApiKotlinx_io_coreSource, SplitApiKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (SplitApiKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(SplitApiKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<SplitApiKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(SplitApiKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(SplitApiKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SplitApiKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<SplitApiKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<SplitApiKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(SplitApiKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<SplitApiKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SplitApiKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SplitApiKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SplitApiKotlinKVariance : SplitApiKotlinEnum<SplitApiKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SplitApiKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SplitApiKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SplitApiKotlinKVariance *out __attribute__((swift_name("out")));
+ (SplitApiKotlinArray<SplitApiKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SplitApiKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SplitApiKotlinKTypeProjectionCompanion : SplitApiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SplitApiKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SplitApiKotlinKTypeProjection *)contravariantType:(id<SplitApiKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SplitApiKotlinKTypeProjection *)covariantType:(id<SplitApiKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SplitApiKotlinKTypeProjection *)invariantType:(id<SplitApiKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SplitApiKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SplitApiKotlinByteIterator : SplitApiBase <SplitApiKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SplitApiByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
