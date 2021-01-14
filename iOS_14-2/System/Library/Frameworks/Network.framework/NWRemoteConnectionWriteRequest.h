/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject {

	NSData* _data;
	NSUUID* _clientID;

}

@property (retain) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 clientID:(id)arg2 ;
-(NSData *)data;
@end

