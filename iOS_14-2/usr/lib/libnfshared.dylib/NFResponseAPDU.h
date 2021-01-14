/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@class NSData;

@interface NFResponseAPDU : NSObject {

	unsigned short _status;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned short status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSData * response; 
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(id)responseWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)response;
-(NSData *)data;
-(unsigned short)decodeUnderlyingAppletError:(id*)arg1 ;
-(unsigned short)status;
@end

