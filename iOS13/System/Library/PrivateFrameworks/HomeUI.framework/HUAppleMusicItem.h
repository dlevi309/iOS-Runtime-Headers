/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>

@protocol HFMediaProfileContainer;
@interface HUAppleMusicItem : HFItem {

	id<HFMediaProfileContainer> _mediaProfileContainer;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

