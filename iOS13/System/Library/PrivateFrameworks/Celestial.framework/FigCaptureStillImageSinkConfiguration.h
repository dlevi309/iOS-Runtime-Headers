/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _quadraHighResCaptureEnabled;

}

@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;              //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)quadraHighResCaptureEnabled;
@end

