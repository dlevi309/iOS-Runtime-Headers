/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@class NSData;

@interface _RWITCPRelayMessage : NSObject {

	BOOL _writtenHeader;
	unsigned long long _writtenPayloadOffset;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,copy,readonly) NSData * payload;                  //@synthesize payload=_payload - In the implementation block
+(id)TCPRelayMessageWithPayload:(id)arg1 ;
+(id)TCPRelayMessageFromDataStream:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)length;
-(id)initWithPayload:(id)arg1 ;
-(NSData *)payload;
-(long long)write:(int)arg1 ;
-(long long)writeLockdown:(lockdown_connectionRef)arg1 ;
-(long long)writeInternal:(/*^block*/id)arg1 ;
@end

