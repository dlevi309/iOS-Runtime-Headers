/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateVideoFrames;
	BOOL _derivedFromPreview;

}

@property (assign,nonatomic) BOOL discardsLateVideoFrames;              //@synthesize discardsLateVideoFrames=_discardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL derivedFromPreview;                   //@synthesize derivedFromPreview=_derivedFromPreview - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)derivedFromPreview;
-(id)description;
-(BOOL)discardsLateVideoFrames;
-(void)setDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setDerivedFromPreview:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sinkType;
-(BOOL)isEqual:(id)arg1 ;
@end

