/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>
#import <libobjc.A.dylib/VUILabelTopMarginCalculationProtocol.h>

@class VUIMediaTagsViewLayout, NSDictionary, NSArray, UIImage, NSString;

@interface VUIMediaTagsView : UIView <VUIRentalExpirationLabelDelegate, VUILabelTopMarginCalculationProtocol> {

	VUIMediaTagsViewLayout* _layout;
	NSDictionary* _viewsMap;
	NSArray* _groupedSubviews;
	double _totalSubviewsWidth;
	UIImage* _commonSenseLightImage;
	UIImage* _commonSenseDarkImage;

}

@property (nonatomic,copy) NSDictionary * viewsMap;                          //@synthesize viewsMap=_viewsMap - In the implementation block
@property (nonatomic,retain) NSArray * groupedSubviews;                      //@synthesize groupedSubviews=_groupedSubviews - In the implementation block
@property (assign,nonatomic) double totalSubviewsWidth;                      //@synthesize totalSubviewsWidth=_totalSubviewsWidth - In the implementation block
@property (nonatomic,retain) UIImage * commonSenseLightImage;                //@synthesize commonSenseLightImage=_commonSenseLightImage - In the implementation block
@property (nonatomic,retain) UIImage * commonSenseDarkImage;                 //@synthesize commonSenseDarkImage=_commonSenseDarkImage - In the implementation block
@property (nonatomic,readonly) VUIMediaTagsViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 element:(id)arg3 existingView:(id)arg4 ;
-(VUIMediaTagsViewLayout *)layout;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 layout:(id)arg2 ;
-(double)topMarginWithBaselineMargin:(double)arg1 ;
-(double)bottomMarginWithBaselineMargin:(double)arg1 ;
-(double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2 ;
-(void)updateWithMetadata:(id)arg1 ;
-(CGSize)_layoutSubviewsForSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(BOOL)_shouldPutTextOnSeparateLines;
-(NSArray *)groupedSubviews;
-(NSDictionary *)viewsMap;
-(void)_removeSeparatorsFromGroupsIfNeeded:(BOOL)arg1 ;
-(id)_newLabelAsSubview:(id)arg1 ;
-(id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2 ;
-(id)_newImageViewAsSubview;
-(id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2 ;
-(void)setCommonSenseLightImage:(UIImage *)arg1 ;
-(void)setCommonSenseDarkImage:(UIImage *)arg1 ;
-(void)setViewsMap:(NSDictionary *)arg1 ;
-(void)setGroupedSubviews:(NSArray *)arg1 ;
-(void)_updateImageAppearanceWithUserInterfaceStyle:(long long)arg1 ;
-(double)_totalSubviewsWidth;
-(void)setTotalSubviewsWidth:(double)arg1 ;
-(void)_updateAppearanceWithUserInterfaceStyle:(long long)arg1 ;
-(UIImage *)commonSenseLightImage;
-(UIImage *)commonSenseDarkImage;
-(double)totalSubviewsWidth;
-(void)_removeGenreLabelAndSeparator;
@end

