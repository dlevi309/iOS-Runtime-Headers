/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@class NSUUID;

@interface Endpoint : NSObject {

	unsigned char _requireAck;
	BOOL _requireEncyption;
	NSUUID* _clientUUID;

}

@property (assign) unsigned char requireAck;              //@synthesize requireAck=_requireAck - In the implementation block
@property (assign) BOOL requireEncyption;                 //@synthesize requireEncyption=_requireEncyption - In the implementation block
@property (retain) NSUUID * clientUUID;                   //@synthesize clientUUID=_clientUUID - In the implementation block
-(id)description;
-(NSUUID *)clientUUID;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(unsigned char)requireAck;
-(void)setRequireAck:(unsigned char)arg1 ;
-(BOOL)requireEncyption;
-(void)setRequireEncyption:(BOOL)arg1 ;
@end

