/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSUUID;

@interface OSLogEventBacktraceFrame : NSObject {

	unsigned char _uuid[16];
	NSUUID* _imageUUID;
	unsigned long long _imageOffset;

}

@property (nonatomic,readonly) NSUUID * imageUUID; 
@property (nonatomic,readonly) const char* imageUUIDBytes; 
@property (nonatomic,readonly) unsigned long long imageOffset;              //@synthesize imageOffset=_imageOffset - In the implementation block
-(void)dealloc;
-(unsigned long long)imageOffset;
-(id)initWithUUIDBytes:(const char*)arg1 andOffset:(unsigned long long)arg2 ;
-(NSUUID *)imageUUID;
-(const char*)imageUUIDBytes;
@end

