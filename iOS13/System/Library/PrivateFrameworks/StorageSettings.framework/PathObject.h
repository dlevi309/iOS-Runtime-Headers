/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@interface PathObject : NSObject {

	int _len;
	char* _path;

}

@property (readonly) char* path;              //@synthesize path=_path - In the implementation block
@property (readonly) int len;                 //@synthesize len=_len - In the implementation block
+(id)pathObjectWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(void)dealloc;
-(id)description;
-(char*)path;
-(int)len;
-(id)initWithPath:(const char*)arg1 component:(const char*)arg2 ;
@end

