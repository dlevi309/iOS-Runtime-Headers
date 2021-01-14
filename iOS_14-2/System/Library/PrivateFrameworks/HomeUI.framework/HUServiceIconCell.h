/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateBackgroundColor;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(HUIconView *)iconView;
-(id<HFIconDescriptor>)iconDescriptor;
-(BOOL)hasConfiguredConstraints;
-(void)setHasConfiguredConstraints:(BOOL)arg1 ;
@end

