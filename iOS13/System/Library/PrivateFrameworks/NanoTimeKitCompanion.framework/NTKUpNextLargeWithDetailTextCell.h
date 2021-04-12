/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>
#import <libobjc.A.dylib/CLKMonochromeFilterProvider.h>

@class UILayoutGuide, NTKUpNextImageView, NTKColoringLabel, NSString;

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {

	UILayoutGuide* _contentLayoutGuide;
	NTKUpNextImageView* _bodyImage;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _bodyLabel;
	NTKColoringLabel* _detail1Label;
	NTKColoringLabel* _detail2Label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureWithContent:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)filterForView:(id)arg1 style:(long long)arg2 ;
-(id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3 ;
-(id)colorForView:(id)arg1 accented:(BOOL)arg2 ;
@end

