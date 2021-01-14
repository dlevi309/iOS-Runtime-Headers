/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)write:(int)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(unsigned long long)length;
-(NSData *)payload;
-(long long)writeLockdown:(lockdown_connectionRef)arg1 ;
-(long long)writeInternal:(/*^block*/id)arg1 ;
@end

