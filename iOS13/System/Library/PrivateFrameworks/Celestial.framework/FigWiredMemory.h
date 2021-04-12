/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(unsigned long long)length;
-(void*)bytes;
-(id)initWithLength:(unsigned long long)arg1 ;
@end

