/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSURL, _DKObjectType, NSObject, NSNumber;

@interface _CDEventStreamProperties : NSObject {

	BOOL isAvailable;
	BOOL dataCollectionEnabled;
	BOOL setupOnDemand;
	BOOL isInstant;
	BOOL isHistorical;
	BOOL shouldSaveCurrentEventOnShutdown;
	NSString* name;
	NSString* formattedName;
	NSString* knowledgeBaseName;
	NSString* knowledgeBaseMetadataClass;
	NSString* descriptionString;
	unsigned long long domainAvailability;
	NSString* monitorClass;
	NSURL* contentProviderBundleURL;
	_DKObjectType* valueType;
	double timeToLive;
	double temporalPrecision;
	long long eventCountLimit;
	double period;
	long long eventsPerPeriod;
	long long pollingPeriod;
	NSObject* _dataCollectionObject;
	NSNumber* _dataCollectionEnabledNum;
	NSObject* _platformObject;
	NSNumber* _isAvailableNum;
	NSNumber* _domainAvailabilityNum;

}

@property (nonatomic,readonly) NSObject * dataCollectionObject;                    //@synthesize dataCollectionObject=_dataCollectionObject - In the implementation block
@property (nonatomic,readonly) NSNumber * dataCollectionEnabledNum;                //@synthesize dataCollectionEnabledNum=_dataCollectionEnabledNum - In the implementation block
@property (nonatomic,readonly) NSObject * platformObject;                          //@synthesize platformObject=_platformObject - In the implementation block
@property (nonatomic,readonly) NSNumber * isAvailableNum;                          //@synthesize isAvailableNum=_isAvailableNum - In the implementation block
@property (nonatomic,readonly) NSNumber * domainAvailabilityNum;                   //@synthesize domainAvailabilityNum=_domainAvailabilityNum - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * formattedName; 
@property (nonatomic,readonly) NSString * knowledgeBaseName; 
@property (nonatomic,readonly) NSString * knowledgeBaseMetadataClass; 
@property (nonatomic,readonly) NSString * descriptionString; 
@property (nonatomic,readonly) BOOL isAvailable; 
@property (nonatomic,readonly) unsigned long long domainAvailability; 
@property (nonatomic,readonly) _DKObjectType * valueType; 
@property (nonatomic,readonly) BOOL dataCollectionEnabled; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) double temporalPrecision; 
@property (nonatomic,readonly) long long eventCountLimit; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) long long eventsPerPeriod; 
@property (nonatomic,readonly) NSString * monitorClass; 
@property (nonatomic,readonly) NSURL * contentProviderBundleURL; 
@property (nonatomic,readonly) BOOL isInstant; 
@property (nonatomic,readonly) BOOL isHistorical; 
@property (nonatomic,readonly) BOOL shouldSaveCurrentEventOnShutdown; 
@property (nonatomic,readonly) BOOL setupOnDemand; 
@property (nonatomic,readonly) long long pollingPeriod; 
+(id)eventStreamPropertiesFromDictionary:(id)arg1 ;
+(id)eventStreamPropertiesFromDictionary:(id)arg1 defaultProperties:(id)arg2 ;
-(double)period;
-(_DKObjectType *)valueType;
-(BOOL)isAvailable;
-(NSNumber *)dataCollectionEnabledNum;
-(long long)eventCountLimit;
-(BOOL)setupOnDemand;
-(NSString *)name;
-(NSString *)knowledgeBaseMetadataClass;
-(BOOL)isInstant;
-(double)timeToLive;
-(NSNumber *)isAvailableNum;
-(id)description;
-(NSString *)knowledgeBaseName;
-(BOOL)shouldSaveCurrentEventOnShutdown;
-(NSString *)formattedName;
-(NSString *)descriptionString;
-(NSNumber *)domainAvailabilityNum;
-(BOOL)isHistorical;
-(NSObject *)platformObject;
-(id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2 ;
-(NSURL *)contentProviderBundleURL;
-(double)temporalPrecision;
-(long long)pollingPeriod;
-(long long)eventsPerPeriod;
-(NSObject *)dataCollectionObject;
-(BOOL)dataCollectionEnabled;
-(NSString *)monitorClass;
-(unsigned long long)domainAvailability;
@end

