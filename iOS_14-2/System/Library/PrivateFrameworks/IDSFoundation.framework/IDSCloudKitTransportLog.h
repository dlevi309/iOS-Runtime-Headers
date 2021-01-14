/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_recordIDsToFetch;
-(id)_transportRecordZoneID;
-(void)createZone:(/*^block*/id)arg1 ;
-(void)disabled_fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSCKDatabase *)database;
-(void)dropZone:(/*^block*/id)arg1 ;
-(void)fetchChangesSinceToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDatabase:(id)arg1 queue:(id)arg2 ;
@end

