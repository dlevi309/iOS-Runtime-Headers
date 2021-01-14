/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

