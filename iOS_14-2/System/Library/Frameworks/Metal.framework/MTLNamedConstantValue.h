/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)dataType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(void*)data;
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 name:(id)arg3 ;
-(void)dealloc;
@end

