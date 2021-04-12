/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _discardsLateVideoFrames;
	BOOL _derivedFromPreview;

}

@property (assign,nonatomic) BOOL discardsLateVideoFrames;              //@synthesize discardsLateVideoFrames=_discardsLateVideoFrames - In the implementation block
@property (assign,nonatomic) BOOL derivedFromPreview;                   //@synthesize derivedFromPreview=_derivedFromPreview - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)setDerivedFromPreview:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)derivedFromPreview;
-(BOOL)discardsLateVideoFrames;
@end

