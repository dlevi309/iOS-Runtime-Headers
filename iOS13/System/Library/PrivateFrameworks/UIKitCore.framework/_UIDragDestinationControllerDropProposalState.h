/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UICollectionViewDropProposal, NSIndexPath;

@interface _UIDragDestinationControllerDropProposalState : NSObject {

	BOOL _didDrop;
	UICollectionViewDropProposal* _proposal;
	NSIndexPath* _indexPath;

}

@property (assign,nonatomic) BOOL didDrop;                                         //@synthesize didDrop=_didDrop - In the implementation block
@property (nonatomic,retain) UICollectionViewDropProposal * proposal;              //@synthesize proposal=_proposal - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSIndexPath * effectiveIndexPath; 
-(id)init;
-(id)description;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UICollectionViewDropProposal *)proposal;
-(void)updateFromDropProposal:(id)arg1 ;
-(NSIndexPath *)effectiveIndexPath;
-(void)didPerformDrop;
-(BOOL)didDrop;
-(BOOL)_hasDropActionTarget;
-(void)setProposal:(UICollectionViewDropProposal *)arg1 ;
-(void)setDidDrop:(BOOL)arg1 ;
@end

