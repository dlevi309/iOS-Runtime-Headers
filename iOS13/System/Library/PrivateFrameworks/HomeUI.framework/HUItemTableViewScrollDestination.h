/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HFItem;

@interface HUItemTableViewScrollDestination : NSObject {

	BOOL _animated;
	HFItem* _item;

}

@property (nonatomic,readonly) HFItem * item;                                //@synthesize item=_item - In the implementation block
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(HFItem *)item;
-(BOOL)isAnimated;
-(id)initWithItem:(id)arg1 animated:(BOOL)arg2 ;
@end

