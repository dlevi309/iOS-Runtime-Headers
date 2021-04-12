/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTKAnalogHandConfiguration : NSObject <NSCopying> {

	unsigned long long _type;
	double _handLength;
	double _handWidth;
	double _pegRadius;
	double _pegStrokeWidth;
	double _inlayInsetRadius;
	double _armLength;
	double _armWidth;
	double _tailLength;
	double _dropShadowRadius;
	double _dropShadowOpacity;
	double _radialShadowRadius;
	double _radialShadowOpacity;
	CGSize _directionalShadowOffset;

}

@property (assign,nonatomic) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double handLength;                           //@synthesize handLength=_handLength - In the implementation block
@property (assign,nonatomic) double handWidth;                            //@synthesize handWidth=_handWidth - In the implementation block
@property (assign,nonatomic) double pegRadius;                            //@synthesize pegRadius=_pegRadius - In the implementation block
@property (assign,nonatomic) double pegStrokeWidth;                       //@synthesize pegStrokeWidth=_pegStrokeWidth - In the implementation block
@property (assign,nonatomic) double inlayInsetRadius;                     //@synthesize inlayInsetRadius=_inlayInsetRadius - In the implementation block
@property (assign,nonatomic) double armLength;                            //@synthesize armLength=_armLength - In the implementation block
@property (assign,nonatomic) double armWidth;                             //@synthesize armWidth=_armWidth - In the implementation block
@property (assign,nonatomic) double tailLength;                           //@synthesize tailLength=_tailLength - In the implementation block
@property (assign,nonatomic) double dropShadowRadius;                     //@synthesize dropShadowRadius=_dropShadowRadius - In the implementation block
@property (assign,nonatomic) double dropShadowOpacity;                    //@synthesize dropShadowOpacity=_dropShadowOpacity - In the implementation block
@property (assign,nonatomic) double radialShadowRadius;                   //@synthesize radialShadowRadius=_radialShadowRadius - In the implementation block
@property (assign,nonatomic) double radialShadowOpacity;                  //@synthesize radialShadowOpacity=_radialShadowOpacity - In the implementation block
@property (assign,nonatomic) CGSize directionalShadowOffset;              //@synthesize directionalShadowOffset=_directionalShadowOffset - In the implementation block
+(id)defaultHourConfigurationForDevice:(id)arg1 ;
+(id)defaultMinuteConfigurationForDevice:(id)arg1 ;
+(id)defaultSecondConfigurationForDevice:(id)arg1 ;
-(CGRect)bounds;
-(id)debugDescription;
-(void)setType:(unsigned long long)arg1 ;
-(CGPoint)anchorPoint;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id)handCacheIdentifier;
-(id)dropShadowCacheIdentifier;
-(id)radialShadowCacheIdentifier;
-(double)dropShadowRadius;
-(double)dropShadowOpacity;
-(double)radialShadowRadius;
-(double)radialShadowOpacity;
-(id)configurationByApplyingInset:(double)arg1 ;
-(double)pegRadius;
-(double)pegStrokeWidth;
-(double)armWidth;
-(double)handWidth;
-(double)armLength;
-(double)handLength;
-(double)tailLength;
-(CGSize)directionalShadowOffset;
-(UIEdgeInsets)inlayInsets;
-(void)setDirectionalShadowOffset:(CGSize)arg1 ;
-(void)setDropShadowRadius:(double)arg1 ;
-(void)setDropShadowOpacity:(double)arg1 ;
-(void)setRadialShadowRadius:(double)arg1 ;
-(void)setRadialShadowOpacity:(double)arg1 ;
-(void)setInlayInsetRadius:(double)arg1 ;
-(void)setHandWidth:(double)arg1 ;
-(void)setHandLength:(double)arg1 ;
-(void)setPegRadius:(double)arg1 ;
-(void)setPegStrokeWidth:(double)arg1 ;
-(void)setArmWidth:(double)arg1 ;
-(void)setArmLength:(double)arg1 ;
-(void)setTailLength:(double)arg1 ;
-(double)inlayInsetRadius;
-(void)copyToConfiguration:(id)arg1 ;
-(id)configurationByApplyingScale:(double)arg1 ;
@end

