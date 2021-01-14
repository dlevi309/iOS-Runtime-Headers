/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	int _sourceSubType;

}

@property (nonatomic,retain) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
@property (nonatomic,retain) OpaqueCMClockRef clock;                                      //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) int sourceSubType;                                           //@synthesize sourceSubType=_sourceSubType - In the implementation block
-(OpaqueCMClockRef)clock;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClock:(OpaqueCMClockRef)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(int)sourceSubType;
-(id)description;
-(void)setSourceSubType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

