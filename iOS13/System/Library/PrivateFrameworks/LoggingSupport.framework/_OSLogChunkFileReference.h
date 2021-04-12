/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {

	_OSLogCollectionReference* _oslcr;
	char* _path;
	unsigned long long _xot;
	unsigned long long _xet;

}

@property (nonatomic,readonly) char* path;                                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrOldestTime;              //@synthesize xot=_xot - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrEndTime;                 //@synthesize xet=_xet - In the implementation block
-(void)dealloc;
-(char*)path;
-(id)initWithCollection:(id)arg1 subpath:(const char*)arg2 ;
-(BOOL)readXattrForTimespan:(id*)arg1 ;
-(id)copyMappedChunkFile:(id*)arg1 ;
-(unsigned long long)xattrOldestTime;
-(unsigned long long)xattrEndTime;
@end

