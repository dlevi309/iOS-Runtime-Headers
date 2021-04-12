/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSync3PolicyCommonMethods.h>

@class NSDictionary, NSString, NSArray;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods> {

	BOOL _isSyncDisabled;
	BOOL _onlyMultiDevice;
	BOOL _onlySingleDevice;
	BOOL _requiresCharging;
	BOOL _pushTriggersSync;
	BOOL _additionsCountTowardTriggeredSyncBucket;
	BOOL _deletionsCountTowardTriggeredSyncBucket;
	BOOL _additionTriggersImmediateSync;
	BOOL _deletionTriggersImmediateSync;
	NSDictionary* _properties;
	NSString* _name;
	NSString* _feature;
	NSArray* _streamNames;
	NSArray* _sources;
	NSArray* _destinations;
	NSString* _transport;
	unsigned long long _periodicSyncCadenceInMinutes;
	unsigned long long _oldestEventToSyncInDays;
	NSArray* _requiresCompanions;

}

@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isSyncDisabled;                                          //@synthesize isSyncDisabled=_isSyncDisabled - In the implementation block
@property (nonatomic,retain) NSString * feature;                                           //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSArray * streamNames;                                        //@synthesize streamNames=_streamNames - In the implementation block
@property (nonatomic,retain) NSArray * sources;                                            //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * destinations;                                       //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSString * transport;                                         //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) unsigned long long periodicSyncCadenceInMinutes;              //@synthesize periodicSyncCadenceInMinutes=_periodicSyncCadenceInMinutes - In the implementation block
@property (assign,nonatomic) unsigned long long oldestEventToSyncInDays;                   //@synthesize oldestEventToSyncInDays=_oldestEventToSyncInDays - In the implementation block
@property (assign,nonatomic) BOOL onlyMultiDevice;                                         //@synthesize onlyMultiDevice=_onlyMultiDevice - In the implementation block
@property (assign,nonatomic) BOOL onlySingleDevice;                                        //@synthesize onlySingleDevice=_onlySingleDevice - In the implementation block
@property (assign,nonatomic) BOOL requiresCharging;                                        //@synthesize requiresCharging=_requiresCharging - In the implementation block
@property (nonatomic,retain) NSArray * requiresCompanions;                                 //@synthesize requiresCompanions=_requiresCompanions - In the implementation block
@property (assign,nonatomic) BOOL pushTriggersSync;                                        //@synthesize pushTriggersSync=_pushTriggersSync - In the implementation block
@property (assign,nonatomic) BOOL additionsCountTowardTriggeredSyncBucket;                 //@synthesize additionsCountTowardTriggeredSyncBucket=_additionsCountTowardTriggeredSyncBucket - In the implementation block
@property (assign,nonatomic) BOOL deletionsCountTowardTriggeredSyncBucket;                 //@synthesize deletionsCountTowardTriggeredSyncBucket=_deletionsCountTowardTriggeredSyncBucket - In the implementation block
@property (assign,nonatomic) BOOL additionTriggersImmediateSync;                           //@synthesize additionTriggersImmediateSync=_additionTriggersImmediateSync - In the implementation block
@property (assign,nonatomic) BOOL deletionTriggersImmediateSync;                           //@synthesize deletionTriggersImmediateSync=_deletionTriggersImmediateSync - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                    //@synthesize properties=_properties - In the implementation block
+(id)policyForFeature:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setPushTriggersSync:(BOOL)arg1 ;
-(BOOL)pushTriggersSync;
-(BOOL)isSyncDisabled;
-(NSString *)transport;
-(void)setProperties:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 properties:(id)arg2 ;
-(void)setIsSyncDisabled:(BOOL)arg1 ;
-(void)setTransport:(NSString *)arg1 ;
-(NSString *)feature;
-(NSArray *)streamNames;
-(NSArray *)sources;
-(NSArray *)destinations;
-(unsigned long long)oldestEventToSyncInDays;
-(BOOL)onlyMultiDevice;
-(BOOL)onlySingleDevice;
-(BOOL)requiresCharging;
-(NSArray *)requiresCompanions;
-(BOOL)additionsCountTowardTriggeredSyncBucket;
-(BOOL)deletionsCountTowardTriggeredSyncBucket;
-(BOOL)additionTriggersImmediateSync;
-(BOOL)deletionTriggersImmediateSync;
-(void)setFeature:(NSString *)arg1 ;
-(void)setStreamNames:(NSArray *)arg1 ;
-(void)setSources:(NSArray *)arg1 ;
-(void)setDestinations:(NSArray *)arg1 ;
-(unsigned long long)periodicSyncCadenceInMinutes;
-(void)setPeriodicSyncCadenceInMinutes:(unsigned long long)arg1 ;
-(void)setOldestEventToSyncInDays:(unsigned long long)arg1 ;
-(void)setOnlyMultiDevice:(BOOL)arg1 ;
-(void)setOnlySingleDevice:(BOOL)arg1 ;
-(void)setRequiresCharging:(BOOL)arg1 ;
-(void)setRequiresCompanions:(NSArray *)arg1 ;
-(void)setAdditionsCountTowardTriggeredSyncBucket:(BOOL)arg1 ;
-(void)setDeletionsCountTowardTriggeredSyncBucket:(BOOL)arg1 ;
-(void)setAdditionTriggersImmediateSync:(BOOL)arg1 ;
-(void)setDeletionTriggersImmediateSync:(BOOL)arg1 ;
@end

