/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@class NSString;

@interface MTLNamedConstantValue : NSObject {

	NSString* _name;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void*)data;
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 name:(id)arg3 ;
-(id)describe;
@end

