/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

