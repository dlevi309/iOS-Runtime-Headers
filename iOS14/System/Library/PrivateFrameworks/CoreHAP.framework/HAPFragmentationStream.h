/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPFragmentationStreamDelegate, OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSNumber;

@interface HAPFragmentationStream : HMFObject {

	id<HAPFragmentationStreamDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableOrderedSet* _pendingPackets;
	NSNumber* _currentPacketTransactionIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * pendingPackets;                     //@synthesize pendingPackets=_pendingPackets - In the implementation block
@property (nonatomic,retain) NSNumber * currentPacketTransactionIdentifier;              //@synthesize currentPacketTransactionIdentifier=_currentPacketTransactionIdentifier - In the implementation block
@property (__weak) id<HAPFragmentationStreamDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
+(id)fragmentationPacketsForData:(id)arg1 maxLength:(unsigned long long)arg2 transactionIdentifier:(unsigned short)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)open;
-(id)init;
-(id<HAPFragmentationStreamDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<HAPFragmentationStreamDelegate>)arg1 ;
-(void)receivedFragmentedPacket:(id)arg1 ;
-(NSNumber *)currentPacketTransactionIdentifier;
-(void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg1 ;
-(void)__addFragmentationPacket:(id)arg1 ;
-(BOOL)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg1 ;
-(id)__transactionDataWithTransactionIdentifier:(unsigned short)arg1 ;
-(void)setCurrentPacketTransactionIdentifier:(NSNumber *)arg1 ;
-(id)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg1 ;
-(NSMutableOrderedSet *)pendingPackets;
@end

