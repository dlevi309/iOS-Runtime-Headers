/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@protocol NTKComplicationImageView;
@class NTKColoringLabel, UIView;

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {

	NTKColoringLabel* _headerLeadingLabel;
	NTKColoringLabel* _headerTrailingLabel;
	BOOL _shouldTruncateHeaderLeadingLabelFirst;
	NTKColoringLabel* _body1Label;
	NTKColoringLabel* _body2Label;
	UIView*<NTKComplicationImageView> _headerGlyph;
	UIView*<NTKComplicationImageView> _body1Glyph;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_update;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_updateLabelsMaxWidths;
-(id)_newLabelSubview;
-(void)_updateForStandardBodyTemplate:(id)arg1 ;
-(void)_updateForTallBodyTemplate:(id)arg1 ;
@end

