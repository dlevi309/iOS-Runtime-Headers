/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSData;

@interface CTKClientSEP_TKTLVRecord : NSObject {

	unsigned long long _tag;
	NSData* _value;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned long long tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSData * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * data;                       //@synthesize data=_data - In the implementation block
+(id)sequenceOfRecordsFromData:(id)arg1 ;
+(id)recordFromData:(id)arg1 ;
+(id)parseFromDataSource:(id)arg1 ;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3 ;
-(unsigned long long)tag;
-(id)description;
-(NSData *)data;
-(NSData *)value;
@end

