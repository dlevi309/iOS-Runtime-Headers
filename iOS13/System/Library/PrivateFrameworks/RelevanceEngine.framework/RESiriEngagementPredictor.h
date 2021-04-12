/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REUpNextSiriObserver.h>
#import <libobjc.A.dylib/RESiriEngagementPredictorProperties.h>

@class NSString, REUpNextTimer;

@interface RESiriEngagementPredictor : REPredictor <REUpNextSiriObserver, RESiriEngagementPredictorProperties> {

	REUpNextTimer* _siriDecayTimer;
	NSString* _lastSiriDomain;
	float _siriInfluence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * lastSiriDomain; 
@property (nonatomic,readonly) float siriInfluence; 
+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)siriServer:(id)arg1 receivedCompletedRequestDomain:(id)arg2 ;
-(NSString *)lastSiriDomain;
-(float)siriInfluence;
@end

