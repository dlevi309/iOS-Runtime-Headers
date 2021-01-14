/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class UILabel, UIButton, UIView, PXGadgetSectionHeader, NSString;

@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <PXChangeObserver> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	UILabel* _titleLabel;
	UIButton* _accessoryButton;
	UIView* _divider;
	PXGadgetSectionHeader* _headerModel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * accessoryButton;                     //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,readonly) UIView * divider;                               //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) PXGadgetSectionHeader * headerModel;              //@synthesize headerModel=_headerModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(BOOL)arg5 ;
+(double)_heightThatFitsFirstToLastBaselineWithText:(id)arg1 width:(double)arg2 font:(id)arg3 ;
+(double)_preferredHeightForText:(id)arg1 fittingWidth:(double)arg2 style:(unsigned long long)arg3 dividerHidden:(BOOL)arg4 ;
+(double)_preferredHeightOfButtonWithType:(unsigned long long)arg1 width:(double)arg2 ;
+(id)_sizingButton;
+(id)_accessoryButtonFont;
+(id)_sizingLabel;
-(UILabel *)titleLabel;
-(void)_updateTitle;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_buttonPressed;
-(void)configureTitleLabel:(id)arg1 ;
-(void)layoutSubviews;
-(void)configureAccessoryButton:(id)arg1 ;
-(void)setHeaderModel:(PXGadgetSectionHeader *)arg1 ;
-(UIView *)divider;
-(PXGadgetSectionHeader *)headerModel;
-(UIButton *)accessoryButton;
-(void)_updateAccessoryButton;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

