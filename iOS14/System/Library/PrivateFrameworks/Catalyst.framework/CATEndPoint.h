/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/


@class NSData, CATAddress;

@interface CATEndPoint : NSObject {

	unsigned _port;
	NSData* _data;
	CATAddress* _address;

}

@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CATAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) unsigned port;                     //@synthesize port=_port - In the implementation block
-(unsigned)port;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithAddress:(id)arg1 port:(unsigned)arg2 ;
-(id)description;
-(CATAddress *)address;
-(NSData *)data;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToEndPoint:(id)arg1 ;
@end

