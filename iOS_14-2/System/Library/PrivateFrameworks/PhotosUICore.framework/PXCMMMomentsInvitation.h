/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMInvitation.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;
@class NSString, PHAssetCollection, PHFetchResult, NSDate, PXAssetCollectionActionManager;

@interface PXCMMMomentsInvitation : NSObject <PXCMMInvitation, NSCopying> {

	long long _shareType;
	NSString* _title;
	NSString* _subtitle;
	id<PXCMMInvitationParticipant> _owner;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _previewAssetsFetchResult;
	PHFetchResult* _participantsFetchResult;

}

@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                        //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * previewAssetsFetchResult;                                   //@synthesize previewAssetsFetchResult=_previewAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * participantsFetchResult;                                    //@synthesize participantsFetchResult=_participantsFetchResult - In the implementation block
@property (nonatomic,readonly) long long shareType;                                                        //@synthesize shareType=_shareType - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id<PXCMMInvitationParticipant> owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long aggregateMediaType; 
+(id)new;
+(id)invitationWithAssetCollection:(id)arg1 ;
+(id)_invitationWithAssetCollection:(id)arg1 previewAssetsFetchResult:(id)arg2 participantsFetchResult:(id)arg3 ;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(long long)shareType;
-(id)init;
-(id<PXCMMInvitationParticipant>)owner;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(long long)aggregateMediaType;
-(id)contextForActivityType:(unsigned long long)arg1 ;
-(id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1 ;
-(PHFetchResult *)previewAssetsFetchResult;
-(NSString *)subtitle;
-(unsigned long long)count;
-(NSString *)description;
-(NSDate *)creationDate;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)expiryDate;
-(PHAssetCollection *)assetCollection;
-(NSString *)identifier;
-(id)initWithAssetCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)invitationWithUpdatedParticipantsFetchResult:(id)arg1 ;
-(PHFetchResult *)participantsFetchResult;
@end

