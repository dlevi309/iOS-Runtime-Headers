/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/NTKColoringView.h>

@class UIColor, CLKImageProvider, NSString;

@interface NTKColoringImageView : UIImageView <NTKColoringView> {

	UIColor* _overrideColor;
	CLKImageProvider* _imageProvider;
	CGSize _maxSize;

}

@property (assign,nonatomic) CGSize maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(UIColor *)color;
-(void)setImage:(id)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setMaxSize:(CGSize)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CGSize)maxSize;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(CLKImageProvider *)imageProvider;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(BOOL)usesLegibility;
@end

