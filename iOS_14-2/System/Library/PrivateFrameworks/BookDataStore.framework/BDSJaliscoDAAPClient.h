/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BDSJaliscoDAAPClientService.h>

@class BDSServiceProxy, NSString;

@interface BDSJaliscoDAAPClient : NSObject <BDSJaliscoDAAPClientService> {

	BOOL _familyUpdateInProgress;
	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BDSServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL familyUpdateInProgress;                 //@synthesize familyUpdateInProgress=_familyUpdateInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(id)init;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(BDSServiceProxy *)serviceProxy;
-(void)updatePolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideItemsWithStoreIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setItemHidden:(BOOL)arg1 forStoreID:(id)arg2 ;
-(void)updateFamilyPolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFamilyUpdateInProgress:(BOOL)arg1 ;
-(BOOL)familyUpdateInProgress;
@end

