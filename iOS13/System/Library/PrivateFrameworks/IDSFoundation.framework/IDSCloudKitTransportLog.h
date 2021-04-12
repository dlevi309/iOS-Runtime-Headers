/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCKDatabase;

@interface IDSCloudKitTransportLog : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCKDatabase* _database;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) IDSCKDatabase * database;                        //@synthesize database=_database - In the implementation block
+(id)_messageFromRecord:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKDatabase *)database;
-(void)fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
-(id)_recordIDsToFetch;
-(id)_transportRecordZoneID;
-(void)createZone:(/*^block*/id)arg1 ;
-(void)dropZone:(/*^block*/id)arg1 ;
-(void)disabled_fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

