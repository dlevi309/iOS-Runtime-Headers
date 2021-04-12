/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)didDrop;
-(UICollectionViewDropProposal *)proposal;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)init;
-(NSIndexPath *)indexPath;
-(id)description;
-(void)setDidDrop:(BOOL)arg1 ;
-(void)setProposal:(UICollectionViewDropProposal *)arg1 ;
-(BOOL)_hasDropActionTarget;
-(NSIndexPath *)effectiveIndexPath;
-(void)updateFromDropProposal:(id)arg1 ;
-(void)didPerformDrop;
@end

