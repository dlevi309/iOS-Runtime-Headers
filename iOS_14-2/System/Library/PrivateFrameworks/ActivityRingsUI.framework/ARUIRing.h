/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface ARUIRing : NSObject <NSCopying> {

	float _diameter;
	float _thickness;
	float _percentage;
	float _opacity;
	float _emptyOpacity;
	float _trackOpacity;
	float _scale;
	float _zRotation;
	UIColor* _topColor;
	UIColor* _bottomColor;
	 _translation;
	 _topColorVector;
	 _topColorPremultipliedVector;
	 _bottomColorVector;
	 _bottomColorPremultipliedVector;

}

@property (nonatomic,retain) UIColor * topColor;                             //@synthesize topColor=_topColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomColor;                          //@synthesize bottomColor=_bottomColor - In the implementation block
@property (assign,nonatomic) float diameter;                                 //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) float thickness;                                //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) float percentage;                               //@synthesize percentage=_percentage - In the implementation block
@property (assign,nonatomic) float opacity;                                  //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) float emptyOpacity;                             //@synthesize emptyOpacity=_emptyOpacity - In the implementation block
@property (assign,nonatomic) float trackOpacity;                             //@synthesize trackOpacity=_trackOpacity - In the implementation block
@property (assign,nonatomic) float scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float zRotation;                                //@synthesize zRotation=_zRotation - In the implementation block
@property (assign,nonatomic)  translation;                                   //@synthesize translation=_translation - In the implementation block
@property (nonatomic,readonly)  topColorVector;                              //@synthesize topColorVector=_topColorVector - In the implementation block
@property (nonatomic,readonly)  topColorPremultipliedVector;                 //@synthesize topColorPremultipliedVector=_topColorPremultipliedVector - In the implementation block
@property (nonatomic,readonly)  bottomColorVector;                           //@synthesize bottomColorVector=_bottomColorVector - In the implementation block
@property (nonatomic,readonly)  bottomColorPremultipliedVector;              //@synthesize bottomColorPremultipliedVector=_bottomColorPremultipliedVector - In the implementation block
+(id)randomRing;
-(float)zRotation;
-(id)init;
-(float)scale;
-(float)opacity;
-(float)thickness;
-(void)setThickness:(float)arg1 ;
-(void)setTranslation:;
-(void)setOpacity:(float)arg1 ;
-(void)setZRotation:(float)arg1 ;
-(id)description;
-(float)diameter;
-()translation;
-(void)setScale:(float)arg1 ;
-(unsigned long long)hash;
-(UIColor *)topColor;
-(void)setDiameter:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(float)percentage;
-(UIColor *)bottomColor;
-(void)setPercentage:(float)arg1 ;
-(void)setTopColor:(UIColor *)arg1 ;
-(void)setBottomColor:(UIColor *)arg1 ;
-(void)setEmptyOpacity:(float)arg1 ;
-(void)setTrackOpacity:(float)arg1 ;
-(float)emptyOpacity;
-(float)trackOpacity;
-()topColorVector;
-()topColorPremultipliedVector;
-()bottomColorVector;
-()bottomColorPremultipliedVector;
-(void)_updatePremultipliedTopColor;
-(void)_updatePremultipliedBottomColor;
-(id)initWithRing:(id)arg1 ;
@end

