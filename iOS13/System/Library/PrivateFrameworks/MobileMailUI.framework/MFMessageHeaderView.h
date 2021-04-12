/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIStackView.h>
#import <libobjc.A.dylib/MFReusable.h>

@protocol MFMessageHeaderViewDelegate;
@class NSMutableArray, MFMessageDisplayMetrics, MFMessageHeaderViewBlock, MessageHeaderViewModel, NSArray, NSString;

@interface MFMessageHeaderView : UIStackView <MFReusable> {

	NSMutableArray* _headerBlocks;
	BOOL _bottomSeparatorDrawsFlushWithLeadingEdge;
	id<MFMessageHeaderViewDelegate> _delegate;
	MFMessageDisplayMetrics* _displayMetrics;
	MFMessageHeaderViewBlock* _pinnedBlock;
	MessageHeaderViewModel* _viewModel;
	CGRect _draggableArea;

}

@property (nonatomic,retain) MessageHeaderViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) CGRect draggableArea;                                         //@synthesize draggableArea=_draggableArea - In the implementation block
@property (assign,nonatomic,__weak) id<MFMessageHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MFMessageDisplayMetrics * displayMetrics;                     //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (nonatomic,retain) MFMessageHeaderViewBlock * pinnedBlock;                       //@synthesize pinnedBlock=_pinnedBlock - In the implementation block
@property (nonatomic,copy) NSArray * headerBlocks;                                         //@synthesize headerBlocks=_headerBlocks - In the implementation block
@property (assign,nonatomic) BOOL bottomSeparatorDrawsFlushWithLeadingEdge;                //@synthesize bottomSeparatorDrawsFlushWithLeadingEdge=_bottomSeparatorDrawsFlushWithLeadingEdge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MFMessageHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<MFMessageHeaderViewDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 forViewPrintFormatter:(id)arg2 ;
-(void)_updateSeparators;
-(MessageHeaderViewModel *)viewModel;
-(void)setViewModel:(MessageHeaderViewModel *)arg1 ;
-(MFMessageDisplayMetrics *)displayMetrics;
-(void)setDisplayMetrics:(MFMessageDisplayMetrics *)arg1 ;
-(void)displayMessageUsingViewModel:(id)arg1 ;
-(void)removeHeaderBlock:(id)arg1 animated:(BOOL)arg2 ;
-(void)addHeaderBlock:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertHeaderBlock:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setDraggableArea:(CGRect)arg1 ;
-(NSArray *)headerBlocks;
-(MFMessageHeaderViewBlock *)pinnedBlock;
-(id)_animationConstraintsForBlockAtIndex:(unsigned long long)arg1 ;
-(void)_layoutAnimatedWithCompletion:(/*^block*/id)arg1 ;
-(void)setPinnedBlock:(MFMessageHeaderViewBlock *)arg1 ;
-(void)setHeaderBlocks:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)bottomSeparatorDrawsFlushWithLeadingEdge;
-(BOOL)_blockHasWhiteOrClearBackground:(id)arg1 ;
-(CGRect)draggableArea;
-(void)removeAllHeaderBlocksAnimated:(BOOL)arg1 ;
-(void)setHeaderBlocks:(NSArray *)arg1 ;
-(void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2 ;
-(void)setBottomSeparatorDrawsFlushWithLeadingEdge:(BOOL)arg1 ;
@end

