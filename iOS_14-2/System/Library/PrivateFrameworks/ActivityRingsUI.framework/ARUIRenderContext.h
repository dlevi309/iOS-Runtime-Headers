/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIRenderContext : NSObject {

	float _drawableDiameter;
	SCD_Struct_AR2 _skewAdjustmentMatrix;
	BOOL _opaque;
	BOOL _presentsWithTransaction;
	float _screenScale;
	 _drawableSize;

}

@property (nonatomic,readonly) float drawableDiameter; 
@property (nonatomic,readonly) SCD_Struct_AR2 skewAdjustmentMatrix; 
@property (assign,nonatomic) BOOL opaque;                                        //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,readonly)  drawableSize;                                    //@synthesize drawableSize=_drawableSize - In the implementation block
@property (nonatomic,readonly) float screenScale;                                //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) BOOL presentsWithTransaction;                       //@synthesize presentsWithTransaction=_presentsWithTransaction - In the implementation block
-(BOOL)opaque;
-(void)setOpaque:(BOOL)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(BOOL)presentsWithTransaction;
-(id)description;
-(unsigned long long)hash;
-()drawableSize;
-(float)screenScale;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDrawableSize:;
-(SCD_Struct_AR2)skewAdjustmentMatrix;
-(float)drawableDiameter;
@end

