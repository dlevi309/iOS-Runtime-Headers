/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)description;
-(void*)data;
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
-(void)dealloc;
@end

