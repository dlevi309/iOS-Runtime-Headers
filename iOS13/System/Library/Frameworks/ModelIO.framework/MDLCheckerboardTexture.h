/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLCheckerboardTexture : MDLTexture {

	int _divisions;
	CGColorRef _color1;
	CGColorRef _color2;

}

@property (assign,nonatomic) float divisions; 
@property (assign,nonatomic) CGColorRef color1; 
@property (assign,nonatomic) CGColorRef color2; 
-(void)dealloc;
-(CGColorRef)color1;
-(void)setColor1:(CGColorRef)arg1 ;
-(id)generateDataAtLevel:(long long)arg1 ;
-(void)setDivisions:(float)arg1 ;
-(float)divisions;
-(void)setColor2:(CGColorRef)arg1 ;
-(CGColorRef)color2;
-(id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(CGColorRef)arg5 color1:(CGColorRef)arg6 ;
@end

