/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGColorRef)color1;
-(void)setColor1:(CGColorRef)arg1 ;
-(CGColorRef)color2;
-(void)dealloc;
-(void)setColor2:(CGColorRef)arg1 ;
-(id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(void)setDivisions:(float)arg1 ;
-(float)divisions;
-(id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(CGColorRef)arg5 color1:(CGColorRef)arg6 ;
@end

