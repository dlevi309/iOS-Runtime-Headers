/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString, NSDate, PXAssetCollectionActionManager;


@protocol PXCMMInvitation <NSObject,PXMediaTypeAggregating>
@property (nonatomic,readonly) long long shareType; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id<PXCMMInvitationParticipant> owner; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset; 
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@required
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(long long)shareType;
-(id<PXCMMInvitationParticipant>)owner;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(id)contextForActivityType:(unsigned long long)arg1;
-(NSString *)subtitle;
-(unsigned long long)count;
-(NSDate *)creationDate;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1;
-(NSDate *)expiryDate;
-(NSString *)identifier;
-(NSString *)title;

@end

