/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class _OSLogEventStoreTimeRef, NSUUID;

@interface _OSLogEventStoreMetadata : NSObject {

	_OSLogEventStoreTimeRef* _ttls[5];
	_OSLogEventStoreTimeRef* _oldestPersist;
	_OSLogEventStoreTimeRef* _oldestSpecial;
	_OSLogEventStoreTimeRef* _oldestSignpost;
	_OSLogEventStoreTimeRef* _oldestHighVolume;
	_OSLogEventStoreTimeRef* _oldestLive;
	_OSLogEventStoreTimeRef* _end;
	NSUUID* _archiveUUID;
	NSUUID* _sourceUUID;

}

@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestPersist;                 //@synthesize oldestPersist=_oldestPersist - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestSpecial;                 //@synthesize oldestSpecial=_oldestSpecial - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestSignpost;                //@synthesize oldestSignpost=_oldestSignpost - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestHighVolume;              //@synthesize oldestHighVolume=_oldestHighVolume - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestLive;                    //@synthesize oldestLive=_oldestLive - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * end;                           //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSUUID * archiveUUID;                                    //@synthesize archiveUUID=_archiveUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * sourceUUID;                                     //@synthesize sourceUUID=_sourceUUID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(_OSLogEventStoreTimeRef *)end;
-(NSUUID *)sourceUUID;
-(id)timeRefForTTLClass:(unsigned char)arg1 ;
-(_OSLogEventStoreTimeRef *)oldestHighVolume;
-(_OSLogEventStoreTimeRef *)oldestSignpost;
-(_OSLogEventStoreTimeRef *)oldestSpecial;
-(_OSLogEventStoreTimeRef *)oldestPersist;
-(_OSLogEventStoreTimeRef *)oldestLive;
-(NSUUID *)archiveUUID;
-(id)initWithCollection:(id)arg1 localStorePlist:(id)arg2 liveDataDescriptor:(int)arg3 ;
@end

