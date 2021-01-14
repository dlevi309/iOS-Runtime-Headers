/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource {

	PXCMMMomentShareInvitationsDataSourceState* _state;

}

@property (nonatomic,readonly) PXCMMMomentShareInvitationsDataSourceState * state;              //@synthesize state=_state - In the implementation block
+(id)new;
-(id)initWithState:(id)arg1 ;
-(id)init;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(PXCMMMomentShareInvitationsDataSourceState *)state;
-(id)invitationAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectIDAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)invitationForObjectID:(id)arg1 ;
@end

