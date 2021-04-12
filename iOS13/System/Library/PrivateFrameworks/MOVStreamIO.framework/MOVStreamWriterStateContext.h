/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

