/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface HUIconListView : UIView {

	NSArray* _iconDescriptors;
	NSMutableArray* _iconViews;

}

@property (nonatomic,retain) NSMutableArray * iconViews;              //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,retain) NSArray * iconDescriptors;               //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setIconViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)iconViews;
-(NSArray *)iconDescriptors;
-(void)setIconDescriptors:(NSArray *)arg1 ;
-(void)_setUpIcons;
-(void)_prepareIconArray;
-(void)_addIconWithDescriptor:(id)arg1 ;
-(void)_layoutRightToLeft;
-(void)_layoutLeftToRight;
-(void)_addIconNamed:(id)arg1 ;
@end

