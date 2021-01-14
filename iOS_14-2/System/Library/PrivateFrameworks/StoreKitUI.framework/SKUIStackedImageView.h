/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageView.h>
#import <libobjc.A.dylib/MPUStackViewDataSource.h>

@class MPUBorderConfiguration, MPUStackView, MPUBorderDrawingCache, UIView, NSString;

@interface SKUIStackedImageView : SKUIImageView <MPUStackViewDataSource> {

	MPUBorderConfiguration* _borderConfiguration;
	long long _stackDepth;
	MPUStackView* _stackView;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
@property (assign,nonatomic,__weak) UIView * perspectiveTargetView; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(SKUIStackedImageConfiguration)_configurationForSize:(CGSize)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(CGPoint)vanishingPoint;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)updateForChangedDistanceFromVanishingPoint;
-(long long)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)setPerspectiveTargetView:(UIView *)arg1 ;
-(UIView *)perspectiveTargetView;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

