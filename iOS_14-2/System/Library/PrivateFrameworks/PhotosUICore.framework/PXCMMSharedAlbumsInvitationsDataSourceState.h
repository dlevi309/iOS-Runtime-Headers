/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _sharedAlbums;
	NSDictionary* _invitationsBySharedAlbumObjectID;

}

@property (nonatomic,readonly) PHFetchResult * sharedAlbums;                                 //@synthesize sharedAlbums=_sharedAlbums - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsBySharedAlbumObjectID;              //@synthesize invitationsBySharedAlbumObjectID=_invitationsBySharedAlbumObjectID - In the implementation block
-(PHFetchResult *)sharedAlbums;
-(id)initWithSharedAlbums:(id)arg1 invitationsBySharedAlbumObjectID:(id)arg2 ;
-(NSDictionary *)invitationsBySharedAlbumObjectID;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

