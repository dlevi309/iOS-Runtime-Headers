/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXCMMMomentShareInvitationsDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _momentShares;
	NSDictionary* _invitationsByMomentShareObjectID;

}

@property (nonatomic,readonly) PHFetchResult * momentShares;                                 //@synthesize momentShares=_momentShares - In the implementation block
@property (nonatomic,readonly) NSDictionary * invitationsByMomentShareObjectID;              //@synthesize invitationsByMomentShareObjectID=_invitationsByMomentShareObjectID - In the implementation block
+(id)new;
-(id)init;
-(PHFetchResult *)momentShares;
-(NSDictionary *)invitationsByMomentShareObjectID;
-(id)stateUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2 ;
-(id)initWithMomentShares:(id)arg1 invitationsByMomentShareObjectID:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

