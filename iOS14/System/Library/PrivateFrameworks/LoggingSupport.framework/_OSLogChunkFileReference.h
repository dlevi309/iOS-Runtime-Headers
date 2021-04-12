/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)xattrEndTime;
-(char*)path;
-(id)initWithCollection:(id)arg1 subpath:(const char*)arg2 ;
-(unsigned long long)xattrOldestTime;
-(BOOL)readXattrForTimespan:(id*)arg1 ;
-(id)copyMappedChunkFile:(id*)arg1 ;
-(void)dealloc;
@end

