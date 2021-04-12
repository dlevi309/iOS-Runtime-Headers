/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSString, NSDate;

@interface CKThrottle : NSObject {

	int _operationType;
	NSString* _defaultsKey;
	NSString* _label;
	NSString* _containerIdentifier;
	long long _databaseScope;
	NSString* _zoneName;
	NSString* _serviceName;
	NSString* _functionName;
	NSDate* _throttleStartDate;
	unsigned long long _intervalLengthSeconds;
	unsigned long long _allowedRequestCount;
	NSDate* _expirationDate;
	unsigned long long _sentRequestCount;
	unsigned long long _currentRequestWindowIndex;

}

@property (nonatomic,copy) NSString * defaultsKey;                                      //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                   //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,copy) NSString * zoneName;                                         //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,nonatomic) int operationType;                                         //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                                     //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,retain) NSDate * throttleStartDate;                                //@synthesize throttleStartDate=_throttleStartDate - In the implementation block
@property (assign,nonatomic) unsigned long long intervalLengthSeconds;                  //@synthesize intervalLengthSeconds=_intervalLengthSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long allowedRequestCount;                    //@synthesize allowedRequestCount=_allowedRequestCount - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                   //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long sentRequestCount;                       //@synthesize sentRequestCount=_sentRequestCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentRequestWindowIndex;              //@synthesize currentRequestWindowIndex=_currentRequestWindowIndex - In the implementation block
+(id)enforcedThrottleForCriteria:(id)arg1 willSendRequest:(BOOL)arg2 outThrottleError:(id*)arg3 ;
+(void)throttleWillBeRemoved:(id)arg1 ;
+(void)locked_removeThrottles:(id)arg1 ;
+(void)removeThrottles:(id)arg1 ;
+(id)throttlingErrorWithRetry:(double)arg1 ;
+(void)setThrottleObserver:(id)arg1 ;
+(void)removeThrottle:(id)arg1 ;
+(id)allThrottles;
+(void)setThrottleList:(id)arg1 ;
+(BOOL)addThrottle:(id)arg1 ;
+(void)resetThrottles;
+(id)CKStatusReportArray;
-(int)operationType;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(NSString *)zoneName;
-(void)setDatabaseScope:(long long)arg1 ;
-(NSString *)containerIdentifier;
-(NSString *)functionName;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSString *)defaultsKey;
-(id)initWithDefaultsKey:(id)arg1 ;
-(void)takeValuesFromThrottleDictionary:(id)arg1 ;
-(double)delayUntilNextOperationAllowed;
-(BOOL)appliesToCriteria:(id)arg1 ;
-(void)throttleDataWasChanged;
-(id)throttleDictionaryBlockingUntilNextRequestWindow;
-(BOOL)canTestInClientProcess;
-(void)setThrottles:(id)arg1 ;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(NSDate *)throttleStartDate;
-(void)setThrottleStartDate:(NSDate *)arg1 ;
-(unsigned long long)intervalLengthSeconds;
-(void)setIntervalLengthSeconds:(unsigned long long)arg1 ;
-(unsigned long long)allowedRequestCount;
-(void)setAllowedRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)sentRequestCount;
-(void)setSentRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)currentRequestWindowIndex;
-(void)setCurrentRequestWindowIndex:(unsigned long long)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setOperationType:(int)arg1 ;
-(long long)databaseScope;
-(void)setLabel:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setZoneName:(NSString *)arg1 ;
-(NSString *)label;
@end

