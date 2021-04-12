/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSURL, _DKObjectType;

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

}

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
-(id)description;
-(NSString *)name;
-(NSString *)knowledgeBaseName;
-(long long)eventCountLimit;
-(BOOL)isAvailable;
-(NSURL *)contentProviderBundleURL;
-(double)timeToLive;
-(long long)eventsPerPeriod;
-(double)period;
-(double)temporalPrecision;
-(BOOL)isHistorical;
-(NSString *)formattedName;
-(NSString *)descriptionString;
-(unsigned long long)domainAvailability;
-(BOOL)dataCollectionEnabled;
-(NSString *)monitorClass;
-(_DKObjectType *)valueType;
-(BOOL)setupOnDemand;
-(BOOL)isInstant;
-(BOOL)shouldSaveCurrentEventOnShutdown;
-(long long)pollingPeriod;
-(id)initFromDictionary:(id)arg1 defaultProperties:(id)arg2 ;
-(NSString *)knowledgeBaseMetadataClass;
@end

