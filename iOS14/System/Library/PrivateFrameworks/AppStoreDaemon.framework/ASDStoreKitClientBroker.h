/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)unregisterClientWithIdentifier:(id)arg1 ;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(id)init;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)removedTransactions:(id)arg1 ;
-(void)downloadAdded:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)handleAuthenticateRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1 ;
-(void)handleDialogRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end

