/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPaletteUndoRedoViewDelegate;
@class UIView, UIStackView, PKPaletteButton, NSLayoutConstraint, NSString;

@interface PKPaletteUndoRedoView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling> {

	BOOL _undoEnabled;
	BOOL _redoEnabled;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPaletteUndoRedoViewDelegate> _delegate;
	UIView* _contentView;
	UIStackView* _stackView;
	PKPaletteButton* _undoButton;
	PKPaletteButton* _redoButton;
	NSLayoutConstraint* _undoButtonWidthConstraint;
	NSLayoutConstraint* _undoButtonHeightConstraint;
	NSLayoutConstraint* _redoButtonWidthConstraint;
	NSLayoutConstraint* _redoButtonHeightConstraint;

}

@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteButton * undoButton;                                   //@synthesize undoButton=_undoButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * redoButton;                                   //@synthesize redoButton=_redoButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoButtonWidthConstraint;                 //@synthesize undoButtonWidthConstraint=_undoButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * undoButtonHeightConstraint;                //@synthesize undoButtonHeightConstraint=_undoButtonHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * redoButtonWidthConstraint;                 //@synthesize redoButtonWidthConstraint=_redoButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * redoButtonHeightConstraint;                //@synthesize redoButtonHeightConstraint=_redoButtonHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteUndoRedoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isUndoEnabled,nonatomic) BOOL undoEnabled;                          //@synthesize undoEnabled=_undoEnabled - In the implementation block
@property (assign,getter=isRedoEnabled,nonatomic) BOOL redoEnabled;                          //@synthesize redoEnabled=_redoEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                           //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(id<PKPaletteUndoRedoViewDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteUndoRedoViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(CGSize)_buttonSize;
-(BOOL)isUndoEnabled;
-(void)setUndoEnabled:(BOOL)arg1 ;
-(double)scalingFactor;
-(PKPaletteButton *)undoButton;
-(void)setUndoButton:(PKPaletteButton *)arg1 ;
-(void)setRedoButton:(PKPaletteButton *)arg1 ;
-(PKPaletteButton *)redoButton;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(void)setRedoEnabled:(BOOL)arg1 ;
-(void)installStackView;
-(void)installUndoButton;
-(void)installRedoButton;
-(void)handleUndo:(id)arg1 ;
-(void)handleRedo:(id)arg1 ;
-(NSLayoutConstraint *)undoButtonWidthConstraint;
-(NSLayoutConstraint *)undoButtonHeightConstraint;
-(NSLayoutConstraint *)redoButtonWidthConstraint;
-(NSLayoutConstraint *)redoButtonHeightConstraint;
-(BOOL)isRedoEnabled;
-(void)setUndoButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUndoButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRedoButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRedoButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

