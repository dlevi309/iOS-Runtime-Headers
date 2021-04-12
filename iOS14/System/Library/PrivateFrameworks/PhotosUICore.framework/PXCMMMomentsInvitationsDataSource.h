/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentsInvitationsDataSourceState;

@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource {

	PXCMMMomentsInvitationsDataSourceState* __state;

}

@property (nonatomic,readonly) PXCMMMomentsInvitationsDataSourceState * _state;              //@synthesize _state=__state - In the implementation block
-(id)initWithState:(id)arg1 ;
-(PXCMMMomentsInvitationsDataSourceState *)_state;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(id)objectAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)indexPathForObjectReference:(id)arg1 ;
-(id)invitationAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)objectIDAtItemIndexPath:(PXSimpleIndexPath)arg1 ;
-(id)invitationForObjectID:(id)arg1 ;
@end

