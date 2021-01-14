/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)lightWithSCNLight:(id)arg1 ;
-(void)setColorSpace:(NSString *)arg1 ;
-(NSString *)colorSpace;
-(1)position;
-(id)init;
-(void)setTransform:(id)arg1 ;
-(RTLight*)rtLight;
-(void)dealloc;
-(void)setLightType:(unsigned long long)arg1 ;
-(CGColorRef)irradianceAtPoint:;
-(CGColorRef)irradianceAtPoint:(CGColorSpaceRef)arg1 ;
-(unsigned long long)lightType;
@end

