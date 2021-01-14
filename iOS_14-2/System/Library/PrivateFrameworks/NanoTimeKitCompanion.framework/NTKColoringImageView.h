/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxSize:(CGSize)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(CGSize)maxSize;
-(CLKImageProvider *)imageProvider;
-(void)_commonInit;
-(void)sizeToFit;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(BOOL)usesLegibility;
@end

