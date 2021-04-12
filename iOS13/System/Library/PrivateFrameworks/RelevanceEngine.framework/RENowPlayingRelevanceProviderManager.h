/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/RENowPlayingRelevanceProviderManagerProperties.h>

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties> {

	unsigned long long _state;

}

@property (nonatomic,readonly) unsigned long long state; 
+(id)_features;
+(Class)_relevanceProviderClass;
-(void)pause;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(unsigned long long)state;
-(void)_updatePlaybackState;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
@end

