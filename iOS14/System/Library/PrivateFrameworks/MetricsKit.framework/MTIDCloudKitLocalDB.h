/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/CKSyncEngineDataSource.h>

@protocol MTIDCloudKitLocalDBDelegate;
@class NSString, CKRecordZoneID, NSURL;

@interface MTIDCloudKitLocalDB : NSObject <CKSyncEngineDataSource> {

	BOOL _zoneCreated;
	id<MTIDCloudKitLocalDBDelegate> _delegate;
	NSString* _recordType;
	CKRecordZoneID* _recordZoneID;
	NSURL* _pathURL;

}

@property (nonatomic,retain) NSString * recordType;                                        //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                                //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSURL * pathURL;                                              //@synthesize pathURL=_pathURL - In the implementation block
@property (assign,nonatomic) BOOL zoneCreated;                                             //@synthesize zoneCreated=_zoneCreated - In the implementation block
@property (assign,nonatomic,__weak) id<MTIDCloudKitLocalDBDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTIDCloudKitLocalDBDelegate>)delegate;
-(NSString *)recordType;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(void)setDelegate:(id<MTIDCloudKitLocalDBDelegate>)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(void)clearData;
-(CKRecordZoneID *)recordZoneID;
-(id)allRecords;
-(void)syncEngine:(id)arg1 didUpdateMetadata:(id)arg2 ;
-(void)syncEngine:(id)arg1 didSaveRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToSaveRecord:(id)arg2 error:(id)arg3 ;
-(void)syncEngine:(id)arg1 didDeleteRecordWithID:(id)arg2 ;
-(void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3 ;
-(void)syncEngine:(id)arg1 failedToSaveRecordZone:(id)arg2 error:(id)arg3 ;
-(id)syncEngine:(id)arg1 recordToSaveForRecordID:(id)arg2 ;
-(void)syncEngine:(id)arg1 didFetchRecord:(id)arg2 ;
-(void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3 ;
-(id)metadata;
-(BOOL)fileExists:(id)arg1 ;
-(NSURL *)pathURL;
-(void)setZoneCreated:(BOOL)arg1 ;
-(BOOL)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithFolder:(id)arg1 recordType:(id)arg2 recordZoneID:(id)arg3 ;
-(BOOL)setUserRecordIDName:(id)arg1 clearDataIfChanged:(BOOL)arg2 ;
-(id)pendingRecordIDs;
-(id)recordWithID:(id)arg1 error:(id*)arg2 ;
-(void)setPathURL:(NSURL *)arg1 ;
-(BOOL)deleteIfExists:(id)arg1 error:(id*)arg2 ;
-(id)dataForName:(id)arg1 error:(id*)arg2 ;
-(id)userRecordIDName;
-(BOOL)writeData:(id)arg1 forName:(id)arg2 error:(id*)arg3 ;
-(BOOL)zoneCreated;
-(BOOL)deleteRecordWithID:(id)arg1 error:(id*)arg2 ;
@end

