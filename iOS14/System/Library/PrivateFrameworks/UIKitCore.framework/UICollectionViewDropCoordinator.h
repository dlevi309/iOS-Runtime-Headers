/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSArray, NSIndexPath, UICollectionViewDropProposal;


@protocol UICollectionViewDropCoordinator <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSIndexPath * destinationIndexPath; 
@property (nonatomic,readonly) UICollectionViewDropProposal * proposal; 
@property (nonatomic,readonly) id<UIDropSession> session; 
@required
-(UICollectionViewDropProposal *)proposal;
-(id)dropItem:(id)arg1 toTarget:(id)arg2;
-(id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(CGRect)arg3;
-(id<UIDropSession>)session;
-(NSArray *)items;
-(NSIndexPath *)destinationIndexPath;
-(id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
-(id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;

@end

