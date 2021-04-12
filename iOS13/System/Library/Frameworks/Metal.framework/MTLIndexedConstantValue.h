/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@interface MTLIndexedConstantValue : NSObject {

	unsigned long long _index;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(id)description;
-(void*)data;
-(unsigned long long)index;
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
@end

