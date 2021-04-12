/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <NotesUI/NotesTextureScrolling.h>
#import <libobjc.A.dylib/ICAccessibilityChildReparentingTarget.h>

@protocol ICAccessibilityChildReparentingController, ICAccessibilityChildReparentingProvider;
@class UIView, NotesTextureBackgroundView, NSLayoutConstraint, NotesTextureView, NSString;

@interface NotesBackgroundView : UIView <NotesTextureScrolling, ICAccessibilityChildReparentingTarget> {

	BOOL _contentViewVisible;
	BOOL _topViewVisible;
	BOOL _textureViewVisible;
	UIView* _contentView;
	id<ICAccessibilityChildReparentingController> _axChildReparentingController;
	NotesTextureBackgroundView* _textureView;
	NotesTextureBackgroundView* _topTextureView;
	NotesTextureBackgroundView* _bottomTextureView;
	NotesTextureBackgroundView* _bottomSafeAreaTextureView;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	id<ICAccessibilityChildReparentingProvider> _elementForAccessibilityReparenting;

}

@property (nonatomic,retain) NotesTextureBackgroundView * textureView;                                                           //@synthesize textureView=_textureView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * topTextureView;                                                        //@synthesize topTextureView=_topTextureView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * bottomTextureView;                                                     //@synthesize bottomTextureView=_bottomTextureView - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * bottomSafeAreaTextureView;                                             //@synthesize bottomSafeAreaTextureView=_bottomSafeAreaTextureView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                                              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewBottomConstraint;                                                   //@synthesize contentViewBottomConstraint=_contentViewBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<ICAccessibilityChildReparentingProvider> elementForAccessibilityReparenting;              //@synthesize elementForAccessibilityReparenting=_elementForAccessibilityReparenting - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                               //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isContentViewVisible,nonatomic) BOOL contentViewVisible;                                                //@synthesize contentViewVisible=_contentViewVisible - In the implementation block
@property (assign,getter=isTopViewVisible,nonatomic) BOOL topViewVisible;                                                        //@synthesize topViewVisible=_topViewVisible - In the implementation block
@property (assign,getter=isTextureViewVisible,nonatomic) BOOL textureViewVisible;                                                //@synthesize textureViewVisible=_textureViewVisible - In the implementation block
@property (nonatomic,readonly) NotesTextureView * backgroundView; 
@property (assign,nonatomic,__weak) id<ICAccessibilityChildReparentingController> axChildReparentingController;                  //@synthesize axChildReparentingController=_axChildReparentingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(UIView *)contentView;
-(void)addSubview:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityElements;
-(NotesTextureView *)backgroundView;
-(void)_setOverrideUserInterfaceStyle:(long long)arg1 ;
-(NSLayoutConstraint *)contentViewBottomConstraint;
-(void)setContentViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)isContentViewVisible;
-(void)setContentViewVisible:(BOOL)arg1 ;
-(void)scrollView:(id)arg1 didChangeContentOffset:(CGPoint)arg2 ;
-(NotesTextureBackgroundView *)textureView;
-(NotesTextureBackgroundView *)bottomTextureView;
-(NotesTextureBackgroundView *)bottomSafeAreaTextureView;
-(NotesTextureBackgroundView *)topTextureView;
-(id)scrollViewDescendantOfView:(id)arg1 ;
-(void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2 ;
-(void)setContentView:(id)arg1 useReadableLayoutGuide:(BOOL)arg2 topMargin:(double)arg3 ;
-(id<ICAccessibilityChildReparentingController>)axChildReparentingController;
-(id<ICAccessibilityChildReparentingProvider>)elementForAccessibilityReparenting;
-(void)setElementForAccessibilityReparenting:(id<ICAccessibilityChildReparentingProvider>)arg1 ;
-(void)reparentAccessibilityChildrenOfElement:(id)arg1 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 toContainer:(id)arg2 ;
-(void)addConstraintsForSafeAreaLayoutGuide:(id)arg1 bottomToolbar:(id)arg2 toContainer:(id)arg3 ;
-(void)updateConstraintsForBottomToolbar:(id)arg1 ;
-(void)fadeOutBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2 ;
-(void)fadeInBottomToolbarInNavigationController:(id)arg1 duration:(double)arg2 ;
-(void)setBottomToolbarVisible:(BOOL)arg1 ;
-(void)snapshotContentIntoSnapshotView:(id)arg1 ;
-(void)setTopViewVisible:(BOOL)arg1 ;
-(void)setTextureViewVisible:(BOOL)arg1 ;
-(void)setupContentViewHomeIndicatorAvoidanceWithSize:(double)arg1 ;
-(void)addSubviewAboveAllViews:(id)arg1 ;
-(BOOL)isTopViewVisible;
-(BOOL)isTextureViewVisible;
-(void)setAxChildReparentingController:(id<ICAccessibilityChildReparentingController>)arg1 ;
-(void)setTextureView:(NotesTextureBackgroundView *)arg1 ;
-(void)setTopTextureView:(NotesTextureBackgroundView *)arg1 ;
-(void)setBottomTextureView:(NotesTextureBackgroundView *)arg1 ;
-(void)setBottomSafeAreaTextureView:(NotesTextureBackgroundView *)arg1 ;
@end

