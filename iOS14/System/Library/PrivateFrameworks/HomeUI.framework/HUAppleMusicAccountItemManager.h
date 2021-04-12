/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HUAppleMusicAccountModule;

@interface HUAppleMusicAccountItemManager : HFItemManager {

	BOOL _shouldDisableUpdates;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	HUAppleMusicAccountModule* _appleMusicAccountModule;

}

@property (nonatomic,retain) HUAppleMusicAccountModule * appleMusicAccountModule;              //@synthesize appleMusicAccountModule=_appleMusicAccountModule - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableUpdates;                                        //@synthesize shouldDisableUpdates=_shouldDisableUpdates - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemModulesForHome:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2 ;
-(HUAppleMusicAccountModule *)appleMusicAccountModule;
-(void)setAppleMusicAccountModule:(HUAppleMusicAccountModule *)arg1 ;
-(void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)setShouldDisableUpdates:(BOOL)arg1 ;
-(BOOL)shouldDisableUpdates;
@end

