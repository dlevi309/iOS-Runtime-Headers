/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REActivityRelevanceProviderManagerProperties.h>

@class NSString;

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties> {

	float _activeEnergy;
	float _exerciseTime;
	float _standHour;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float activeEnergy; 
@property (nonatomic,readonly) float exerciseTime; 
@property (nonatomic,readonly) float standHour; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(float)activeEnergy;
-(void)_prepareForUpdate;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)predictorDidUpdate:(id)arg1 ;
-(float)exerciseTime;
-(float)standHour;
@end

