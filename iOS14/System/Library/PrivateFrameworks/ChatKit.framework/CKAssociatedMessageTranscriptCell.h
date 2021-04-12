/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearFilters;
-(id<CKAssociatedMessageTranscriptCellDelegate>)delegate;
-(BOOL)hidesCheckmark;
-(CGSize)size;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setGeometryDescriptor:(IMAssociatedMessageGeometryDescriptor)arg1 ;
-(void)setAssociatedItemView:(UIView *)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)setDelegate:(id<CKAssociatedMessageTranscriptCellDelegate>)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIView *)associatedItemView;
-(double)cumulativeAssociatedOffset;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setCumulativeAssociatedOffset:(double)arg1 ;
-(void)setParentSize:(CGSize)arg1 ;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(CGSize)parentSize;
-(void)layoutSubviewsForAlignmentContents;
-(CGRect)associatedViewFrame:(CGRect)arg1 inContainerFrame:(CGRect)arg2 ;
@end

