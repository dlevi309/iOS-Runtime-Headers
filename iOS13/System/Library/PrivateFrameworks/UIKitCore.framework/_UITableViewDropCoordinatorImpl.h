/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITableViewDropCoordinator.h>

@protocol _UITableViewDropCoordinatorDelegate, UIDropSession;
@class NSArray, NSIndexPath, UITableViewDropProposal, NSString;

@interface _UITableViewDropCoordinatorImpl : NSObject <_UITableViewDropCoordinator> {

	id<_UITableViewDropCoordinatorDelegate> _delegate;
	NSArray* _items;
	NSIndexPath* _destinationIndexPath;
	NSIndexPath* _translatedDestinationIndexPath;
	UITableViewDropProposal* _proposal;
	id<UIDropSession> _session;

}

@property (assign,nonatomic,__weak) id<_UITableViewDropCoordinatorDelegate> delegate;                                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                                                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSIndexPath * destinationIndexPath;                                                                                                          //@synthesize destinationIndexPath=_destinationIndexPath - In the implementation block
@property (setter=_setTranslatedDestinationIndexPath:,getter=_translatedDestinationIndexPath,nonatomic,retain) NSIndexPath * translatedDestinationIndexPath;              //@synthesize translatedDestinationIndexPath=_translatedDestinationIndexPath - In the implementation block
@property (nonatomic,retain) UITableViewDropProposal * proposal;                                                                                                          //@synthesize proposal=_proposal - In the implementation block
@property (nonatomic,retain) id<UIDropSession> session;                                                                                                                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * _items; 
@property (nonatomic,readonly) NSIndexPath * _destinationIndexPath; 
@property (nonatomic,readonly) UITableViewDropProposal * _dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> _dropSession; 
-(id<_UITableViewDropCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<_UITableViewDropCoordinatorDelegate>)arg1 ;
-(id<UIDropSession>)session;
-(void)setSession:(id<UIDropSession>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)_items;
-(NSIndexPath *)destinationIndexPath;
-(void)setDestinationIndexPath:(NSIndexPath *)arg1 ;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2 ;
-(id)dropItem:(id)arg1 toTarget:(id)arg2 ;
-(UITableViewDropProposal *)proposal;
-(NSIndexPath *)_destinationIndexPath;
-(id<UIDropSession>)_dropSession;
-(void)setProposal:(UITableViewDropProposal *)arg1 ;
-(id)initWithDelegate:(id)arg1 destinationIndexPath:(id)arg2 dropProposal:(id)arg3 session:(id)arg4 ;
-(UITableViewDropProposal *)_dropProposal;
-(id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(id)dropItem:(id)arg1 toRowAtIndexPath:(id)arg2 ;
-(id)dropItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(CGRect)arg3 ;
-(void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2 ;
-(id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(void)_dropItem:(id)arg1 toTarget:(id)arg2 ;
-(id)_sourceIndexPaths;
-(void)_translateDestinationIndexPath:(/*^block*/id)arg1 ;
-(void)_translateSourceIndexPathsOfDropItems:(/*^block*/id)arg1 ;
-(void)_dropItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3 ;
-(id)_translatedDestinationIndexPath;
-(void)_setTranslatedDestinationIndexPath:(id)arg1 ;
@end

