/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@class NSString;

@interface MDLLight : MDLObject {

	RTLight* _light;
	NSString* _colorSpace;
	CGColorSpaceRef _cgColorSpace;
	unsigned long long _lightType;

}

@property (assign,nonatomic) unsigned long long lightType;              //@synthesize lightType=_lightType - In the implementation block
@property (nonatomic,copy) NSString * colorSpace; 
-(id)init;
-(void)dealloc;
-(1)position;
-(NSString *)colorSpace;
-(void)setColorSpace:(NSString *)arg1 ;
-(void)setTransform:(id)arg1 ;
-(void)setLightType:(unsigned long long)arg1 ;
-(RTLight*)rtLight;
-(CGColorRef)irradianceAtPoint:;
-(CGColorRef)irradianceAtPoint:(CGColorSpaceRef)arg1 ;
-(unsigned long long)lightType;
@end

