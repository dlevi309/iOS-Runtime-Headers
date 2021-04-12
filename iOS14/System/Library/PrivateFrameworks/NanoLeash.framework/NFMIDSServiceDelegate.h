/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class NSMutableDictionary, NSString;

@interface NFMIDSServiceDelegate : NSObject <IDSServiceDelegate> {

	NSMutableDictionary* _inflightMessages;
	NSMutableDictionary* _pendingMessages;

}

@property (nonatomic,retain) NSMutableDictionary * inflightMessages;              //@synthesize inflightMessages=_inflightMessages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingMessages;               //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(void)setPendingMessages:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pendingMessages;
-(id)_sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 ;
-(void)_enqueueMessage:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 idsIdentifier:(id)arg8 ;
-(id)sendProtoBuf:(id)arg1 service:(id)arg2 priority:(long long)arg3 responseIdentifier:(id)arg4 expectsResponse:(BOOL)arg5 retryCount:(long long)arg6 retryInterval:(double)arg7 ;
-(NSMutableDictionary *)inflightMessages;
-(void)setInflightMessages:(NSMutableDictionary *)arg1 ;
@end

