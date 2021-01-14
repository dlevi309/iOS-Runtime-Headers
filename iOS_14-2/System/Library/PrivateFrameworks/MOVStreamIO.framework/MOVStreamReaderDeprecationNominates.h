/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamReaderDeprecationNominates <NSObject>
@property (assign) BOOL l010OutputFormatRAW14L016; 
@required
-(id)initWithURL:(id)arg1 error:(id*)arg2;
-(id)grabNextMetadataOfStream:(id)arg1 timeRange:(SCD_Struct_MO31*)arg2;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
-(BOOL)l010OutputFormatRAW14L016;
-(id)getMetadataStreamsAssociatedTo:(id)arg1;
-(id)getUnknownMetadataStreamsAssociatedTo:(id)arg1;
-(unsigned)pixelFormatForStream:(id)arg1;
-(void)setL010OutputFormatRAW14L016:(BOOL)arg1;

@end

