/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)showAllWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)updateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)executeQuery:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)setHidden:(BOOL)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateForAccountID:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

