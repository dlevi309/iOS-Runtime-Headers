/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NTKColoringLabel, CLKTextProvider;

@interface NTKUpNextHeaderView : UICollectionReusableView {

	NTKColoringLabel* _label;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
@end

