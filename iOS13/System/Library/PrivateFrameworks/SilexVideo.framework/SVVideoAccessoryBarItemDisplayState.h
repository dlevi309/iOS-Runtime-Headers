/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVAccessoryItem;
#import <SilexVideo/SilexVideo-Structs.h>
@class UIView;

@interface SVVideoAccessoryBarItemDisplayState : NSObject {

	id<SVAccessoryItem> _item;
	UIView* _containerView;
	unsigned long long _displayMode;
	CGRect _frame;

}

@property (nonatomic,readonly) id<SVAccessoryItem> item;                    //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id<SVAccessoryItem>)item;
-(CGRect)frame;
-(UIView *)containerView;
-(unsigned long long)displayMode;
-(id)initWithItem:(id)arg1 containerView:(id)arg2 displayMode:(unsigned long long)arg3 frame:(CGRect)arg4 ;
@end

