/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphUpdateHealthRecording <NSObject>
@required
-(void)recordTransactionSize:(unsigned long long)arg1;
-(void)beginRecording;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1;
-(void)endRecordingInBackground:(BOOL)arg1;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2;

@end

