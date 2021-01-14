/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSData * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (readonly) NSPNetworkAgent * agentForKey; 
-(NSUUID *)uuid;
-(NSData *)info;
-(unsigned)flags;
-(unsigned)session_counter;
-(NSPNetworkAgent *)agentForKey;
-(void)setError:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)error;
-(id)data;
-(void)setInfo:(NSData *)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setSession_counter:(unsigned)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

