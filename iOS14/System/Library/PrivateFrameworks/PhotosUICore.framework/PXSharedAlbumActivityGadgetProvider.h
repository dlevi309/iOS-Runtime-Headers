/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXFeedSectionInfosManagerDelegate.h>
#import <libobjc.A.dylib/PXSharedAlbumInvitationGadgetDelegate.h>

@class PXFeedSectionInfosManager, NSString, NSMutableArray, PXGadgetNavigationHelper;

@interface PXSharedAlbumActivityGadgetProvider : PXGadgetProvider <PXFeedSectionInfosManagerDelegate, PXSharedAlbumInvitationGadgetDelegate> {

	PXFeedSectionInfosManager* _feedSectionInfosManager;
	unsigned long long _estimatedGadgetCount;
	NSString* _invitationAlbumCloudGUID;
	NSMutableArray* _delayedChanges;
	long long _maxNumberOfSections;

}

@property (nonatomic,retain) PXFeedSectionInfosManager * feedSectionInfosManager;              //@synthesize feedSectionInfosManager=_feedSectionInfosManager - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedGadgetCount;                          //@synthesize estimatedGadgetCount=_estimatedGadgetCount - In the implementation block
@property (nonatomic,retain) NSString * invitationAlbumCloudGUID;                              //@synthesize invitationAlbumCloudGUID=_invitationAlbumCloudGUID - In the implementation block
@property (nonatomic,retain) NSMutableArray * delayedChanges;                                  //@synthesize delayedChanges=_delayedChanges - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfSections;                                  //@synthesize maxNumberOfSections=_maxNumberOfSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
-(void)generateGadgets;
-(void)_update:(id)arg1 ;
-(id)init;
-(void)gadget:(id)arg1 didAccept:(BOOL)arg2 ;
-(void)_processDelayedChanges;
-(void)_processDelayedChangesImmediatelyIfNecessary:(id)arg1 ;
-(unsigned long long)_indexForGadget:(id)arg1 ;
-(id)_indexesOfSectionInfosToDisplay:(unsigned long long)arg1 ;
-(id)_gadgetsForSectionIndexes:(id)arg1 ;
-(unsigned long long)estimatedGadgetCount;
-(void)setEstimatedGadgetCount:(unsigned long long)arg1 ;
-(NSString *)invitationAlbumCloudGUID;
-(void)setInvitationAlbumCloudGUID:(NSString *)arg1 ;
-(NSMutableArray *)delayedChanges;
-(void)setDelayedChanges:(NSMutableArray *)arg1 ;
-(long long)maxNumberOfSections;
-(void)loadDataForGadgets;
-(unsigned long long)estimatedNumberOfGadgets;
-(PXFeedSectionInfosManager *)feedSectionInfosManager;
-(void)setFeedSectionInfosManager:(PXFeedSectionInfosManager *)arg1 ;
-(void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2 ;
-(void)dealloc;
@end

