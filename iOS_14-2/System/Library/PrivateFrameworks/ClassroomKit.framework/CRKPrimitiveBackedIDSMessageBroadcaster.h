/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSMessageBroadcasting.h>

@protocol CRKIDSPrimitives, CRKIDSListener;
@class NSHashTable;

@interface CRKPrimitiveBackedIDSMessageBroadcaster : NSObject <CRKIDSMessageBroadcasting> {

	id<CRKIDSPrimitives> _IDSPrimitives;
	NSHashTable* _broadcastHandlers;
	id<CRKIDSListener> _messageListener;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;              //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) NSHashTable * broadcastHandlers;                 //@synthesize broadcastHandlers=_broadcastHandlers - In the implementation block
@property (nonatomic,retain) id<CRKIDSListener> messageListener;                //@synthesize messageListener=_messageListener - In the implementation block
+(id)broadcasterWithIDSPrimitives:(id)arg1 ;
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(id)initWithIDSPrimitives:(id)arg1 ;
-(void)beginListeningForMessagesWithCompletion:(/*^block*/id)arg1 ;
-(NSHashTable *)broadcastHandlers;
-(void)broadcastMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 ;
-(void)setMessageListener:(id<CRKIDSListener>)arg1 ;
-(void)addBroadcastHandler:(id)arg1 ;
-(id<CRKIDSListener>)messageListener;
@end

