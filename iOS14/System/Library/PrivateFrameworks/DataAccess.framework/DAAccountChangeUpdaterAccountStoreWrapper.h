/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <libobjc.A.dylib/DAAccountChangeHandlerAccountStoreUpdater.h>

@class ACAccountStore, NSString;

@interface DAAccountChangeUpdaterAccountStoreWrapper : NSObject <DAAccountChangeHandlerAccountStoreUpdater> {

	ACAccountStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateAccount:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccountStore:(id)arg1 ;
@end

