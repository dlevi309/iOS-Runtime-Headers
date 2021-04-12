/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(unsigned)port;
-(NSData *)data;
-(CATAddress *)address;
-(id)initWithAddress:(id)arg1 port:(unsigned)arg2 ;
-(BOOL)isEqualToEndPoint:(id)arg1 ;
@end

