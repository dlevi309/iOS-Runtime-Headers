/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@class UILayoutGuide, NTKUpNextImageView, NTKColoringLabel, CLKFont, NSArray, NSLayoutConstraint, NSString;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {

	UILayoutGuide* _labelLayoutGuide;
	UILayoutGuide* _imageLayoutGuide;
	NTKUpNextImageView* _imageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _descriptionLine1Label;
	NTKColoringLabel* _descriptionLine2Label;
	NTKColoringLabel* _descriptionLine3Label;
	CLKFont* _standardFont;
	CLKFont* _italicFont;
	CLKFont* _boldFont;
	NSArray* _withHeaderConstraints;
	NSArray* _withoutHeaderConstraints;
	NSArray* _withDescription2Constraints;
	NSArray* _withoutDescription2Constraints;
	NSArray* _withDescription3Constraints;
	NSArray* _withoutDescription3Constraints;
	NSLayoutConstraint* _imageLayoutGuideWidthConstraint;
	NSLayoutConstraint* _imageLayoutGuideHeightConstraint;
	BOOL _showingHeader;
	BOOL _showingThirdLine;
	BOOL _showingSmallThumbnail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)suggestedBodyImageSizeForDevice:(id)arg1 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)configureWithContent:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
@end

