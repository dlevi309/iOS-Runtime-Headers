/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSIndexPath, UITableViewDropProposal;


@protocol _UITableViewDropCoordinator <UITableViewDropCoordinator>
@property (nonatomic,readonly) NSArray * _items; 
@property (nonatomic,readonly) NSIndexPath * _destinationIndexPath; 
@property (nonatomic,readonly) UITableViewDropProposal * _dropProposal; 
@property (nonatomic,readonly) id<UIDropSession> _dropSession; 
@required
-(id)_dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(/*^block*/id)arg5;
-(NSArray *)_items;
-(UITableViewDropProposal *)_dropProposal;
-(void)_dropItem:(id)arg1 toTarget:(id)arg2;
-(void)_dropItem:(id)arg1 toRowAtIndexPath:(id)arg2;
-(id<UIDropSession>)_dropSession;
-(NSIndexPath *)_destinationIndexPath;

@end

