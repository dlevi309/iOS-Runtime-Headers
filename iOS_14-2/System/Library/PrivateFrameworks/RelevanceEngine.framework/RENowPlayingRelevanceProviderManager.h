/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 ;
-(void)pause;
-(unsigned long long)state;
-(void)resume;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_updatePlaybackState;
@end

