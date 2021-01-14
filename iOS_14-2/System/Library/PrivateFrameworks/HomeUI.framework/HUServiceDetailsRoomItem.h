/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceDetailsAbstractItem.h>

@protocol HFServiceLikeBuilder;
@class HFItemBuilder;

@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem {

	HFItemBuilder*<HFServiceLikeBuilder> _serviceLikeBuilder;

}

@property (nonatomic,readonly) HFItemBuilder*<HFServiceLikeBuilder> serviceLikeBuilder;              //@synthesize serviceLikeBuilder=_serviceLikeBuilder - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)serviceLikeBuilder;
-(id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3 ;
@end

