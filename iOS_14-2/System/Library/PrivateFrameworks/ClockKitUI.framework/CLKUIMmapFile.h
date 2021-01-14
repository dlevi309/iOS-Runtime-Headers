/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class NSString;

@interface CLKUIMmapFile : NSObject {

	int _descriptor;
	NSString* _path;
	unsigned long long _length;
	const void* _bytes;

}

@property (nonatomic,readonly) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int descriptor;                         //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) const void* bytes;                      //@synthesize bytes=_bytes - In the implementation block
+(id)mmapFileWithPath:(id)arg1 ;
-(const void*)bytes;
-(unsigned long long)length;
-(NSString *)path;
-(int)descriptor;
-(void)dealloc;
-(id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void*)arg4 ;
@end

