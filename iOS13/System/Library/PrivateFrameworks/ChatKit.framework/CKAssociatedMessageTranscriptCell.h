/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMessageContentCell.h>

@protocol CKAssociatedMessageTranscriptCellDelegate;
@class UIView;

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell {

	id<CKAssociatedMessageTranscriptCellDelegate> _delegate;
	UIView* _associatedItemView;
	double _cumulativeAssociatedOffset;
	CGSize _size;
	CGSize _parentSize;
	IMAssociatedMessageGeometryDescriptor _geometryDescriptor;

}

@property (assign,nonatomic,__weak) id<CKAssociatedMessageTranscriptCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * associatedItemView;                                                //@synthesize associatedItemView=_associatedItemView - In the implementation block
@property (assign,nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor;                   //@synthesize geometryDescriptor=_geometryDescriptor - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize parentSize;                                                          //@synthesize parentSize=_parentSize - In the implementation block
@property (assign,nonatomic) double cumulativeAssociatedOffset;                                          //@synthesize cumulativeAssociatedOffset=_cumulativeAssociatedOffset - In the implementation block
-(id<CKAssociatedMessageTranscriptCellDelegate>)delegate;
-(void)setDelegate:(id<CKAssociatedMessageTranscriptCellDelegate>)arg1 ;
-(CGSize)size;
-(void)prepareForReuse;
-(void)setSize:(CGSize)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)configureForChatItem:(id)arg1 ;
-(void)setCumulativeAssociatedOffset:(double)arg1 ;
-(void)setParentSize:(CGSize)arg1 ;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hidesCheckmark;
-(void)setGeometryDescriptor:(IMAssociatedMessageGeometryDescriptor)arg1 ;
-(void)setAssociatedItemView:(UIView *)arg1 ;
-(UIView *)associatedItemView;
-(CGSize)parentSize;
-(double)cumulativeAssociatedOffset;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(CGRect)associatedViewFrame:(CGRect)arg1 inContainerFrame:(CGRect)arg2 ;
@end

