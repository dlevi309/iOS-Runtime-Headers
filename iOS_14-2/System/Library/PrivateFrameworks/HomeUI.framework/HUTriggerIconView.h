/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setConstraints:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(HUIconView *)iconView;
-(void)setIconView:(HUIconView *)arg1 ;
-(id)initWithIconDescriptor:(id)arg1 ;
@end

