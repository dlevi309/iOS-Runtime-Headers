/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const char*)imageUUIDBytes;
-(id)initWithUUIDBytes:(const char*)arg1 andOffset:(unsigned long long)arg2 ;
-(unsigned long long)imageOffset;
-(NSUUID *)imageUUID;
-(void)dealloc;
@end

