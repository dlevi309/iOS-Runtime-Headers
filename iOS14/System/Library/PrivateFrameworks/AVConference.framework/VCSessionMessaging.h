/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCControlChannelDelegate.h>

@class NSMutableDictionary, NSString;

@interface VCSessionMessaging : NSObject <VCControlChannelDelegate> {

	NSMutableDictionary* topics;
	id controlChannelWeak;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned)arg3 fromParticipant:(id)arg4 ;
-(void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(BOOL)arg3 toParticipant:(id)arg4 ;
-(id)newPackedMessageFromDictionary:(id)arg1 ;
-(void)sendMessage:(id)arg1 withTopic:(id)arg2 ;
-(id)newPackedMessageFromMomentsDictionary:(id)arg1 ;
-(void)stopMessaging;
-(id)messageForTopic:(id)arg1 command:(id)arg2 ;
-(id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2 ;
-(void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(BOOL)arg3 receiveHandler:(/*^block*/id)arg4 ;
-(id)newDictionaryFromUnpackedMessage:(id)arg1 ;
-(id)newDictionaryFromUnpackedMomentsMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 ;
-(void)startMessaging;
-(void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2 ;
@end

