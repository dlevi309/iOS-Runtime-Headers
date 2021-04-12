/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@interface FigWiredMemory : NSObject {

	void* _bytes;
	unsigned long long _length;
	unsigned long long _roundedLength;
	BOOL _isWired;

}

@property (nonatomic,readonly) void* bytes;                            //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
+(void)initialize;
-(void*)bytes;
-(unsigned long long)length;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)dealloc;
@end

