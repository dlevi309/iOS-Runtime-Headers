/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class TRIClient, NSString, NSDictionary;

@interface SSTrialManager : NSObject {

	TRIClient* _trialClient;
	NSString* _namespaceName;
	NSDictionary* _cachedValuesForFactor;
	BOOL _hasActiveExperiment;
	BOOL _hasDefaultValues;
	BOOL _hasRollout;
	BOOL _client_exclusive;
	BOOL _in_allocation;
	NSString* _spotlightNamespace;
	NSString* _experimentId;
	NSString* _rolloutId;

}

@property (nonatomic,readonly) NSString * spotlightNamespace;              //@synthesize spotlightNamespace=_spotlightNamespace - In the implementation block
@property (nonatomic,readonly) NSString * experimentId;                    //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) NSString * rolloutId;                       //@synthesize rolloutId=_rolloutId - In the implementation block
+(id)sharedPolicyTrialManager;
+(id)getTTRLogs;
+(id)sharedTrialClient;
+(id)currentTrialManager;
+(id)sharedRankingTrialManager;
+(id)sharedUITrialManager;
+(void)loadFactorsForAllSharedTrialManagers;
+(id)sharedModelTrialManager;
-(NSString *)rolloutId;
-(id)getFilePathForFactor:(id)arg1 ;
-(NSString *)spotlightNamespace;
-(long long)getLongValueForFactor:(id)arg1 ;
-(BOOL)hasActiveRollout;
-(id)getLevelForFactor:(id)arg1 ;
-(BOOL)getInReservedAllocationForExperiment;
-(id)getFactorDictionary;
-(BOOL)getBooleanValueForFactor:(id)arg1 ;
-(id)getStringValueForFactor:(id)arg1 ;
-(id)description;
-(void)reloadAllFactors;
-(NSString *)experimentId;
-(id)getTreatmentId;
-(BOOL)getClientOnlyExperiment;
-(id)initWithNameSpace:(unsigned)arg1 loadDefaultValues:(BOOL)arg2 ;
-(double)getDoubleValueForFactor:(id)arg1 ;
-(void)refreshTrackingId;
-(BOOL)hasActiveExperiment;
@end

