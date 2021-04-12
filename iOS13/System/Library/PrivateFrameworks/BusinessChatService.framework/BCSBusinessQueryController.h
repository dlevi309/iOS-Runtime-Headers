/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BCSXPCDaemonProtocol.h>

@class BCSBusinessItemController, BCSIconController, BCSConfigController;

@interface BCSBusinessQueryController : NSObject <BCSXPCDaemonProtocol> {

	BCSBusinessItemController* _bizItemController;
	BCSIconController* _iconController;
	BCSConfigController* _configController;

}

@property (nonatomic,retain) BCSBusinessItemController * bizItemController;              //@synthesize bizItemController=_bizItemController - In the implementation block
@property (nonatomic,retain) BCSIconController * iconController;                         //@synthesize iconController=_iconController - In the implementation block
@property (nonatomic,retain) BCSConfigController * configController;                     //@synthesize configController=_configController - In the implementation block
-(id)init;
-(void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2 ;
-(void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deleteInMemoryCache;
-(BCSConfigController *)configController;
-(long long)_shardStartIndexForPhoneHash:(long long)arg1 shardCount:(long long)arg2 ;
-(SCD_Struct_BC4)_businessItemBucketRangeFromPhoneHash:(long long)arg1 bucketCount:(long long)arg2 ;
-(BCSBusinessItemController *)bizItemController;
-(id)_matchingBusinessItemInBusinessItemBucket:(id)arg1 forPhoneHash:(long long)arg2 ;
-(BCSIconController *)iconController;
-(BOOL)_deleteDiskCache;
-(void)setBizItemController:(BCSBusinessItemController *)arg1 ;
-(void)setIconController:(BCSIconController *)arg1 ;
-(void)setConfigController:(BCSConfigController *)arg1 ;
@end

