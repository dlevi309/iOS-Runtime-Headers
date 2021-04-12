/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol HFIconDescriptor;
@class HUIconView;

@interface HUServiceIconCell : UICollectionViewCell {

	BOOL _hasConfiguredConstraints;
	id<HFIconDescriptor> _iconDescriptor;
	HUIconView* _iconView;

}

@property (nonatomic,readonly) HUIconView * iconView;                          //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) BOOL hasConfiguredConstraints;                    //@synthesize hasConfiguredConstraints=_hasConfiguredConstraints - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(void)_updateBackgroundColor;
-(void)setSelected:(BOOL)arg1 ;
-(HUIconView *)iconView;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(BOOL)hasConfiguredConstraints;
-(void)setHasConfiguredConstraints:(BOOL)arg1 ;
@end

