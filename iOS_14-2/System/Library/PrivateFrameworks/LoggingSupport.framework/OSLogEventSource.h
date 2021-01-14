/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_OSLogEventStoreTimeRef *)oldestTimeRef;
-(void)_insertIndexFile:(id)arg1 ;
-(void)_enumerateIndexFiles:(/*^block*/id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_OSLogCollectionReference *)lcr;
-(_OSLogEventStoreMetadata *)lesm;
-(_OSLogEventStoreTimeRef *)newestTimeRef;
-(id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(os_timesync_db_sRef)arg3 ;
-(os_timesync_db_sRef)tsdb;
-(NSMutableArray *)_fileRefs;
-(NSDate *)newestDate;
-(void)set_fileRefs:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(NSDate *)oldestDate;
@end

