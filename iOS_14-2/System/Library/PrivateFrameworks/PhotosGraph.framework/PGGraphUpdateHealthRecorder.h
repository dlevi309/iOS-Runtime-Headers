/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphUpdateHealthRecording.h>

@class NSString;

@interface PGGraphUpdateHealthRecorder : NSObject <PGGraphUpdateHealthRecording> {

	BOOL _changeConsumer;
	unsigned long long _numberOfDatabaseChangesReceivedInForeground;
	unsigned long long _numberOfDatabaseChangesReceivedInBackground;
	unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInForeground;
	unsigned long long _numberOfDatabaseChangesConvertedToGraphChangesInBackground;
	unsigned long long _numberOfTimesGraphUpdatePaused;
	unsigned long long _maximumTransactionSize;

}

@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesReceivedInForeground;                             //@synthesize numberOfDatabaseChangesReceivedInForeground=_numberOfDatabaseChangesReceivedInForeground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesReceivedInBackground;                             //@synthesize numberOfDatabaseChangesReceivedInBackground=_numberOfDatabaseChangesReceivedInBackground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInForeground;              //@synthesize numberOfDatabaseChangesConvertedToGraphChangesInForeground=_numberOfDatabaseChangesConvertedToGraphChangesInForeground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDatabaseChangesConvertedToGraphChangesInBackground;              //@synthesize numberOfDatabaseChangesConvertedToGraphChangesInBackground=_numberOfDatabaseChangesConvertedToGraphChangesInBackground - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTimesGraphUpdatePaused;                                          //@synthesize numberOfTimesGraphUpdatePaused=_numberOfTimesGraphUpdatePaused - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumTransactionSize;                                                  //@synthesize maximumTransactionSize=_maximumTransactionSize - In the implementation block
@property (getter=isChangeConsumer,nonatomic,readonly) BOOL changeConsumer;                                                //@synthesize changeConsumer=_changeConsumer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordTransactionSize:(unsigned long long)arg1 ;
-(void)beginRecording;
-(unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInBackground;
-(void)recordNumberOfDatabaseChangesReceived:(unsigned long long)arg1 inBackground:(BOOL)arg2 ;
-(void)recordNumberOfTimesGraphUpdatePaused:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDatabaseChangesReceivedInBackground;
-(unsigned long long)numberOfDatabaseChangesConvertedToGraphChangesInForeground;
-(id)initForChangeConsumer:(BOOL)arg1 ;
-(unsigned long long)numberOfDatabaseChangesReceivedInForeground;
-(unsigned long long)numberOfTimesGraphUpdatePaused;
-(unsigned long long)maximumTransactionSize;
-(void)endRecordingInBackground:(BOOL)arg1 ;
-(void)recordNumberOfDatabaseChangesConvertedToGraphChanges:(unsigned long long)arg1 inBackground:(BOOL)arg2 ;
-(BOOL)isChangeConsumer;
@end

