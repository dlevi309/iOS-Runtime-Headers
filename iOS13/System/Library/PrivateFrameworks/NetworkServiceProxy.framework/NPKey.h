/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@class NSData, NSUUID, NSPNetworkAgent;

@interface NPKey : NSObject {

	unsigned _session_counter;
	int _error;
	unsigned _flags;
	NSData* _info;
	NSUUID* _uuid;

}

@property (assign) unsigned session_counter;                     //@synthesize session_counter=_session_counter - In the implementation block
@property (assign) int error;                                    //@synthesize error=_error - In the implementation block
@property (retain) NSData * info;                                //@synthesize info=_info - In the implementation block
@property (retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (readonly) NSPNetworkAgent * agentForKey; 
-(id)initWithData:(id)arg1 ;
-(id)data;
-(unsigned)flags;
-(int)error;
-(void)setError:(int)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSData *)info;
-(void)setFlags:(unsigned)arg1 ;
-(void)setInfo:(NSData *)arg1 ;
-(unsigned)session_counter;
-(NSPNetworkAgent *)agentForKey;
-(void)setSession_counter:(unsigned)arg1 ;
@end

