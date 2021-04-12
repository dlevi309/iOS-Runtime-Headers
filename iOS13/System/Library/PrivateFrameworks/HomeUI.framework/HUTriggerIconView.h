/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HUIconView, NSArray;

@interface HUTriggerIconView : UIView {

	HUIconView* _iconView;
	NSArray* _constraints;

}

@property (nonatomic,retain) HUIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithIconDescriptor:(id)arg1 ;
@end

