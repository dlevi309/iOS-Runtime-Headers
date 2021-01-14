/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamWriterDeprecationNominates <NSObject>
@property (assign) unsigned long long fifoBufferCapacity; 
@required
-(BOOL)setTrackMetadata:(id)arg1 forStream:(id)arg2;
-(BOOL)setTrackMetadata:(id)arg1 forMetadataStream:(id)arg2;
-(BOOL)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3;
-(unsigned long long)fifoBufferSizeForStream:(id)arg1;
-(unsigned long long)fifoBufferCapacity;
-(void)setFifoBufferCapacity:(unsigned long long)arg1;

@end

