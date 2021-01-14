/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject {

	BOOL _animated;
	HFItem* _item;

}

@property (nonatomic,readonly) HFItem * item;                                //@synthesize item=_item - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(BOOL)isAnimated;
-(HFItem *)item;
-(id)initWithItem:(id)arg1 animated:(BOOL)arg2 ;
@end

