/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;
	int _databaseChangedNotificationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(void)dealloc;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)executeQuery:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)setHidden:(BOOL)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)showAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateForAccountID:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
@end

