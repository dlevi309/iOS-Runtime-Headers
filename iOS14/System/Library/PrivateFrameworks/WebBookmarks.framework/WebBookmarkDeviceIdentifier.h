/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSUUID, NSObject;

@interface WebBookmarkDeviceIdentifier : NSObject {

	NSURL* _plistURL;
	NSUUID* _UUID;
	BOOL _encounteredErrorWhileObtainingUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _fileMonitor;
	BOOL _readOnly;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,readonly) BOOL encounteredErrorWhileObtainingUUID; 
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
+(void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1 ;
+(void)clearDeviceIdentifierWithPlistURL:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(NSUUID *)UUID;
-(BOOL)isReadOnly;
-(id)initWithPlistURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)_resumeMonitoringMetaDataFile;
-(void)_metaDataDidChange:(id)arg1 ;
-(void)_setUpWithPlistURL:(id)arg1 readOnly:(BOOL)arg2 queue:(id)arg3 ;
-(void)_registerForMedadaDataFileChangeDistributedNotification;
-(id)description;
-(void)_cancelMonitoringMetaDataFile;
-(BOOL)encounteredErrorWhileObtainingUUID;
-(void)_createOrLoadMetaData;
-(void)stopObservingChanges;
-(void)dealloc;
@end

