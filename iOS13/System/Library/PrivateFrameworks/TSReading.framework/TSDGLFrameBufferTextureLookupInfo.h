/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSDGLFrameBufferTextureLookupInfo : NSObject {

	unsigned _attachment;
	unsigned _name;
	long long _index;

}

@property (nonatomic,readonly) unsigned attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned name;                    //@synthesize name=_name - In the implementation block
+(id)textureLookupInfoWithAttachment:(unsigned)arg1 index:(long long)arg2 name:(unsigned)arg3 ;
-(unsigned)name;
-(long long)index;
-(unsigned)attachment;
-(id)initWithAttachment:(unsigned)arg1 index:(long long)arg2 name:(unsigned)arg3 ;
@end

