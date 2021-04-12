/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@class UILayoutGuide, NTKColoringLabel, NTKUpNextImageView, UIView, CLKFont, NSArray, NSString;

@interface NTKUpNextMultilineCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {

	UILayoutGuide* _contentLayoutGuide;
	UILayoutGuide* _descriptionTextLayoutGuide;
	UILayoutGuide* _bodyImageSizingLayoutGuide;
	BOOL _showingHeader;
	BOOL _showingHeaderImage;
	BOOL _showingThirdLine;
	BOOL _showingDescriptionAccessory;
	BOOL _showingImageAccessory;
	BOOL _showingDescriptionImage;
	BOOL _usingStretchableImage;
	unsigned _headerImageEdge;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _descriptionLine1Label;
	NTKColoringLabel* _descriptionLine2Label;
	NTKUpNextImageView* _headerImage;
	UIView* _accessoryView;
	NTKUpNextImageView* _descriptionImageView;
	CLKFont* _standardFont;
	CLKFont* _italicFont;
	CLKFont* _boldFont;
	NSArray* _withHeaderConstraints;
	NSArray* _withoutHeaderConstraints;
	NSArray* _headerWithLeftImageConstraints;
	NSArray* _headerWithRightImageConstraints;
	NSArray* _headerWithNoImageConstraints;
	NSArray* _withDescription2Constraints;
	NSArray* _withoutDescription2Constraints;
	NSArray* _withAccessoryConstraints;
	NSArray* _withoutAccessoryConstraints;
	NSArray* _withDescriptionImageViewConstraints;
	NSArray* _withStretchableDescriptionImageViewConstraints;
	NSArray* _withoutDescriptionImageViewConstraints;

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
-(void)setFilterProvider:(id)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
@end

