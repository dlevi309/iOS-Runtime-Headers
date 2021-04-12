/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject {

	NSData* _data;
	NSUUID* _clientID;

}

@property (retain) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setClientID:(NSUUID *)arg1 ;
-(NSUUID *)clientID;
-(id)initWithData:(id)arg1 clientID:(id)arg2 ;
@end

