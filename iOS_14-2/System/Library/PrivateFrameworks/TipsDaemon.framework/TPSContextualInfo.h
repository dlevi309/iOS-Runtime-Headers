/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSString, NSArray, TPSContextualCondition;

@interface TPSContextualInfo : TPSSerializableObject {

	int _priority;
	long long _customizationID;
	long long _displayMaxCount;
	long long _lastModifiedDate;
	NSString* _identifier;
	NSArray* _displayBundleIDs;
	NSArray* _eligibleContext;
	NSArray* _usageEvents;
	TPSContextualCondition* _triggerCondition;
	TPSContextualCondition* _desiredOutcomeCondition;

}

@property (assign,nonatomic) long long customizationID;                                   //@synthesize customizationID=_customizationID - In the implementation block
@property (assign,nonatomic) long long displayMaxCount;                                   //@synthesize displayMaxCount=_displayMaxCount - In the implementation block
@property (assign,nonatomic) long long lastModifiedDate;                                  //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * displayBundleIDs;                                    //@synthesize displayBundleIDs=_displayBundleIDs - In the implementation block
@property (nonatomic,copy) NSArray * eligibleContext;                                     //@synthesize eligibleContext=_eligibleContext - In the implementation block
@property (nonatomic,copy) NSArray * usageEvents;                                         //@synthesize usageEvents=_usageEvents - In the implementation block
@property (nonatomic,copy) TPSContextualCondition * triggerCondition;                     //@synthesize triggerCondition=_triggerCondition - In the implementation block
@property (nonatomic,copy) TPSContextualCondition * desiredOutcomeCondition;              //@synthesize desiredOutcomeCondition=_desiredOutcomeCondition - In the implementation block
@property (nonatomic,readonly) int priority;                                              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(void)eventsInfoArrayForContextualInfoDictionary:(id)arg1 triggerEvents:(id*)arg2 desiredOutcomeEvents:(id*)arg3 ;
+(id)identifierFromDictionary:(id)arg1 ;
+(id)contentDictionaryWithTipDeliveryInfoId:(id)arg1 deliveryInfoMap:(id)arg2 ;
-(long long)lastModifiedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setEligibleContext:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLastModifiedDate:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTriggerCondition:(TPSContextualCondition *)arg1 ;
-(TPSContextualCondition *)triggerCondition;
-(NSArray *)eligibleContext;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)customizationID;
-(int)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)triggerEventIdentifiers;
-(id)desiredOutcomeEventIdentifiers;
-(long long)_lastModifiedDateFromDictionary:(id)arg1 ;
-(void)setCustomizationID:(long long)arg1 ;
-(void)setDisplayMaxCount:(long long)arg1 ;
-(void)setDisplayBundleIDs:(NSArray *)arg1 ;
-(void)setUsageEvents:(NSArray *)arg1 ;
-(void)setDesiredOutcomeCondition:(TPSContextualCondition *)arg1 ;
-(id)displayBundleID;
-(BOOL)hasChangesFromDictionary:(id)arg1 ;
-(id)conditionForType:(unsigned long long)arg1 ;
-(void)restartTriggerTracking;
-(void)restartDesiredOutcomeTracking;
-(id)dismissalEventIdentifiers;
-(long long)displayMaxCount;
-(NSArray *)displayBundleIDs;
-(NSArray *)usageEvents;
-(TPSContextualCondition *)desiredOutcomeCondition;
@end

