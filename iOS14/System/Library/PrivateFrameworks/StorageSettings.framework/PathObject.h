/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@interface PathObject : NSObject {

	int _len;
	char* _path;

}

@property (readonly) char* path;              //@synthesize path=_path - In the implementation block
@property (readonly) int len;                 //@synthesize len=_len - In the implementation block
+(id)pathObjectWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(int)len;
-(char*)path;
-(id)description;
-(void)dealloc;
-(id)initWithPath:(const char*)arg1 component:(const char*)arg2 ;
@end

