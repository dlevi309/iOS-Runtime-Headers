/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)open;
-(void)close;
-(id<HAPFragmentationStreamDelegate>)delegate;
-(void)setDelegate:(id<HAPFragmentationStreamDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
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

