/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _quadraHighResCaptureEnabled;

}

@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;              //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(id)description;
-(BOOL)quadraHighResCaptureEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
@end

