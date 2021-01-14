/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)clientUUID;
-(void)setRequireEncyption:(BOOL)arg1 ;
-(void)setRequireAck:(unsigned char)arg1 ;
-(id)description;
-(void)setClientUUID:(NSUUID *)arg1 ;
-(unsigned char)requireAck;
-(BOOL)requireEncyption;
@end

