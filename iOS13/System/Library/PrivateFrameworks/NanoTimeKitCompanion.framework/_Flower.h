/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(float)width;
-(float)height;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(NSNumber *)tex;
-(void)setTex:(NSNumber *)arg1 ;
@end

