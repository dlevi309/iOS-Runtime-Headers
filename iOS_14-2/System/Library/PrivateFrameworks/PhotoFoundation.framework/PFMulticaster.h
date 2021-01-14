/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFWeakHashDelegate.h>

@protocol PFMulticasterDelegate;
@class NSHashTable, PFWeakHash, NSMutableSet, NSString;

@interface PFMulticaster : NSObject <PFWeakHashDelegate> {

	opaque_pthread_mutex_t _receiverLock;
	NSHashTable* _strongReceivers;
	PFWeakHash* _weakReceivers;
	NSMutableSet* _strongReceiverLists;
	PFWeakHash* _weakReceiverLists;
	BOOL _invalidated;
	BOOL _acceptingReceivers;
	id<PFMulticasterDelegate> _delegate;

}

@property (__weak) id<PFMulticasterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL invalidated;                              //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) BOOL acceptingReceivers;                       //@synthesize acceptingReceivers=_acceptingReceivers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_multicasterClassForProtocolNamed:(id)arg1 ;
+(id)_newProtocolMulticaster;
+(id)_protocolNameByDecodingClassName;
+(void)_validateProtocol:(id)arg1 ;
+(id)_subclassNameByEncodingProtocolName:(id)arg1 placeholder:(BOOL)arg2 ;
+(BOOL)_isPlaceholderClassByDecodingClassName;
+(void)configureClass:(Class)arg1 asMulticasterOf:(id)arg2 ;
+(id)_extractProtocolFromSelectorName:(id)arg1 prefix:(id)arg2 suffix:(id)arg3 ;
+(BOOL)resolveClassMethod:(SEL)arg1 ;
-(id)init;
-(BOOL)invalidated;
-(id<PFMulticasterDelegate>)delegate;
-(void)distributeSelector:(SEL)arg1 distributionBlock:(/*^block*/id)arg2 ;
-(BOOL)addReceiver:(id)arg1 ;
-(BOOL)addWeakReceiver:(id)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(void)weakHashBecameEmpty:(id)arg1 ;
-(void)handleMultiplyRegistered:(id)arg1 ;
-(void)postNoReceiversNotice;
-(BOOL)stopAcceptingReceivers;
-(void)_enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
-(void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(/*^block*/id)arg3 ;
-(BOOL)acceptingReceivers;
-(void)setDelegate:(id<PFMulticasterDelegate>)arg1 ;
-(void)invalidate;
@end
