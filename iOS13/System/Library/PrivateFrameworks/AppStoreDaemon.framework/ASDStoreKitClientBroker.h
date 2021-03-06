/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDStoreKitClientProtocol.h>

@class NSMapTable, NSString;

@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol> {

	NSMapTable* _clients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBroker;
-(id)init;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterClientWithIdentifier:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1 ;
-(void)removedTransactions:(id)arg1 ;
-(void)downloadAdded:(id)arg1 ;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
@end

