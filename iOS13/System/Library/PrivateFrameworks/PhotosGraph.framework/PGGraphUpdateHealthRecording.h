/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphUpdateHealthRecording <NSObject>
@required
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
-(void)recordTransactionSize:(unsigned long long)arg1;
-(void)endRecordingInBackground:(BOOL)arg1;

@end

