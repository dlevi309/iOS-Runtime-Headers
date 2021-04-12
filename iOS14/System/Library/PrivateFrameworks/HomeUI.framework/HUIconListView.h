/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)iconViews;
-(id)init;
-(void)setIconViews:(NSMutableArray *)arg1 ;
-(void)layoutSubviews;
-(NSArray *)iconDescriptors;
-(void)setIconDescriptors:(NSArray *)arg1 ;
-(void)_setUpIcons;
-(void)_prepareIconArray;
-(void)_addIconWithDescriptor:(id)arg1 ;
-(void)_layoutRightToLeft;
-(void)_layoutLeftToRight;
-(void)_addIconNamed:(id)arg1 ;
@end

