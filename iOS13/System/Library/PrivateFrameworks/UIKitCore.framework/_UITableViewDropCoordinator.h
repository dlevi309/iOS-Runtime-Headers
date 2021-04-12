/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSIndexPath, UITableViewDropProposal;


@protocol _UITableViewDropCoordinator <UITableViewDropCoordinator>
@property (nonatomic,readonly) NSArray * _items; 
@property (nonatomic,readonly) NSIndexPath * _destinationIndexPath; 
@property (nonatomic,readonly) UITableViewDropProposal * _dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> _dropSession; 
@required
-(NSArray *)_items;
-(NSIndexPath *)_destinationIndexPath;
-(id<UIDropSession>)_dropSession;
-(UITableViewDropProposal *)_dropProposal;
-(void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
-(id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5;
-(void)_dropItem:(id)arg1 toTarget:(id)arg2;

@end

