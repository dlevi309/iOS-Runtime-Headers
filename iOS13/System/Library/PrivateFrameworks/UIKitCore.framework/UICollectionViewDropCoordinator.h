/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSIndexPath, UICollectionViewDropProposal;


@protocol UICollectionViewDropCoordinator <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
@required
-(id<UIDropSession>)session;
-(NSArray *)items;
-(NSIndexPath *)destinationIndexPath;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;
-(id)dropItem:(id)arg1 toTarget:(id)arg2;
-(UICollectionViewDropProposal *)proposal;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3;

@end

