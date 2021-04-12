/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)parseFromDataSource:(id)arg1 ;
+(id)sequenceOfRecordsFromData:(id)arg1 ;
+(id)recordFromData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(NSData *)value;
-(unsigned long long)tag;
-(id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3 ;
@end

