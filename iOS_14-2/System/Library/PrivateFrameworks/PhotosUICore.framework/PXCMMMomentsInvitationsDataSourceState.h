/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _assetCollections;
	NSDictionary* _invitationsByAssetCollectionObjectID;

}

@property (nonatomic,readonly) PHFetchResult * assetCollections;                                 //@synthesize assetCollections=_assetCollections - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsByAssetCollectionObjectID;              //@synthesize invitationsByAssetCollectionObjectID=_invitationsByAssetCollectionObjectID - In the implementation block
-(PHFetchResult *)assetCollections;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)invitationsByAssetCollectionObjectID;
-(id)initWithAssetCollections:(id)arg1 invitationsByAssetCollectionObjectID:(id)arg2 ;
@end

