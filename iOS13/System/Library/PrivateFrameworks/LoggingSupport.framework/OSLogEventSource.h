/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogCollectionReference, _OSLogEventStoreMetadata, _OSLogEventStoreTimeRef, NSUUID, NSDate;

@interface OSLogEventSource : NSObject {

	NSMutableArray* _fileRefs;
	_OSLogCollectionReference* _lcr;
	_OSLogEventStoreMetadata* _lesm;
	_OSLogEventStoreTimeRef* _oldestTimeRef;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,retain) NSMutableArray * _fileRefs;                             //@synthesize fileRefs=_fileRefs - In the implementation block
@property (nonatomic,readonly) os_timesync_db_sRef tsdb;                             //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,readonly) _OSLogCollectionReference * lcr;                      //@synthesize lcr=_lcr - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreMetadata * lesm;                      //@synthesize lesm=_lesm - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestTimeRef;              //@synthesize oldestTimeRef=_oldestTimeRef - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * newestTimeRef; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSDate * oldestDate; 
@property (nonatomic,readonly) NSDate * newestDate; 
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(os_timesync_db_sRef)tsdb;
-(NSDate *)newestDate;
-(_OSLogCollectionReference *)lcr;
-(void)_enumerateIndexFiles:(/*^block*/id)arg1 ;
-(_OSLogEventStoreMetadata *)lesm;
-(NSMutableArray *)_fileRefs;
-(id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(os_timesync_db_sRef)arg3 ;
-(void)_insertIndexFile:(id)arg1 ;
-(_OSLogEventStoreTimeRef *)newestTimeRef;
-(NSDate *)oldestDate;
-(void)set_fileRefs:(NSMutableArray *)arg1 ;
-(_OSLogEventStoreTimeRef *)oldestTimeRef;
@end

