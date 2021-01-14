/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;

@interface _Flower : _Geometry {

	float _width;
	float _height;
	NSNumber* _tex;

}

@property (nonatomic,retain) NSNumber * tex;              //@synthesize tex=_tex - In the implementation block
@property (assign,nonatomic) float width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                //@synthesize height=_height - In the implementation block
-(void)setHeight:(float)arg1 ;
-(NSNumber *)tex;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(float)height;
-(void)setTex:(NSNumber *)arg1 ;
@end

