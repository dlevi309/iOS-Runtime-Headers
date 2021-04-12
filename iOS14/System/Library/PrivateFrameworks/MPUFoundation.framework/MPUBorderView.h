/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class MPUBorderConfiguration;

@interface MPUBorderView : UIView {

	BOOL _hidesWhenFullyTransparent;
	MPUBorderConfiguration* _borderConfiguration;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (assign,nonatomic) BOOL hidesWhenFullyTransparent;                          //@synthesize hidesWhenFullyTransparent=_hidesWhenFullyTransparent - In the implementation block
@property (nonatomic,readonly) double requiredOutsetForDropShadow; 
@property (nonatomic,readonly) UIEdgeInsets resizableImageCapInsets; 
+(double)requiredOutsetForDropShadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)requiredOutsetForDropShadow;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(MPUBorderConfiguration *)borderConfiguration;
-(UIEdgeInsets)resizableImageCapInsets;
-(BOOL)hidesWhenFullyTransparent;
-(void)setHidesWhenFullyTransparent:(BOOL)arg1 ;
@end

