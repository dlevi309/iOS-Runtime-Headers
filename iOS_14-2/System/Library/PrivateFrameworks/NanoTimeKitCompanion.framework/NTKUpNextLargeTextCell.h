/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@class CLKFont, UILayoutGuide, NTKUpNextImageView, NTKColoringLabel, NSArray, NSString;

@interface NTKUpNextLargeTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {

	BOOL _showingHeaderImage;
	BOOL _showingBodyImage;
	unsigned _currentImageEdge;
	CLKFont* _standardBodyFont;
	CLKFont* _monospaceBodyFont;
	UILayoutGuide* _contentLayoutGuide;
	NTKUpNextImageView* _headerImage;
	NTKUpNextImageView* _bodyImage;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _bodyLabel;
	NSArray* _headerWithLeftImageConstraints;
	NSArray* _headerWithRightImageConstraints;
	NSArray* _headerWithNoImageConstraints;
	NSArray* _bodyWithLeftImageConstraints;
	NSArray* _bodyWithNoImageConstraints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)configureWithContent:(id)arg1 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
@end

