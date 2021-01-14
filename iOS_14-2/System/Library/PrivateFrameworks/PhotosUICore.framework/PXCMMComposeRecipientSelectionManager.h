/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXCMMComposeRecipientSelectionManagerDelegate;
@class NSMutableOrderedSet, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionSnapshot;

@interface PXCMMComposeRecipientSelectionManager : NSObject {

	NSMutableOrderedSet* _selectedComposeRecipients;
	NSMutableOrderedSet* _selectedRecipients;
	PXCMMComposeRecipientDataSource* _dataSource;
	id<PXCMMComposeRecipientSelectionManagerDelegate> _delegate;
	PXCMMComposeRecipientSelectionSnapshot* _selectionSnapshot;

}

@property (nonatomic,retain) PXCMMComposeRecipientSelectionSnapshot * selectionSnapshot;                     //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,readonly) PXCMMComposeRecipientDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientSelectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)new;
-(void)selectAll;
-(PXCMMComposeRecipientSelectionSnapshot *)selectionSnapshot;
-(id)init;
-(id<PXCMMComposeRecipientSelectionManagerDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(void)setDelegate:(id<PXCMMComposeRecipientSelectionManagerDelegate>)arg1 ;
-(void)setDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)setSelectionSnapshot:(PXCMMComposeRecipientSelectionSnapshot *)arg1 ;
-(void)setSelectedState:(BOOL)arg1 atIndex:(long long)arg2 ;
-(id)_setSelectedState:(BOOL)arg1 forComposeRecipients:(id)arg2 ;
-(id)_createComposeRecipientSelectionSnapshotFromCurrentState;
-(void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1 ;
@end

