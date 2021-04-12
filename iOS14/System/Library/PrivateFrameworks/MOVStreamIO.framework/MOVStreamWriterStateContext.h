/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

@class NSArray, NSError;


@protocol MOVStreamWriterStateContext <NSObject>
@property (retain) NSArray * movMetadataItems; 
@property (retain) NSError * criticalError; 
@required
-(void)setCriticalError:(id)arg1;
-(void)processFinishRecording;
-(NSError *)criticalError;
-(void)setMovMetadataItems:(id)arg1;
-(void)finishAVWriter;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg1;
-(void)finishAndDrainFifoFirst;
-(void)deleteMOVFile;
-(void)deleteFileOnCancel;
-(void)processCancelRecording;
-(void)processForceFinishRecording;
-(NSArray *)movMetadataItems;

@end

