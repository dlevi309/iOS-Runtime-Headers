/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UITextView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionViewFlowLayout, UIView, NSArray, UICollectionView, NSString;

@interface RTTUITextView : UITextView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {

	long long _leftIndex;
	CGPoint _panContentOffset;
	double _currentKeyboardWidth;
	UICollectionViewFlowLayout* _flowLayout;
	UIView* _leftBackgroundColorEdge;
	UIView* _rightBackgroundColorEdge;
	UIView* _middleBackgroundColorEdge;
	UIView* _inputAccessoryPlaceholderView;
	UIView* _iPadBufferView;
	BOOL _showTTYPredictions;
	BOOL _isHandlingKeyboardFrameChanged;
	NSArray* _ttyAbbreviations;
	UICollectionView* _predictionsCollectionView;

}

@property (nonatomic,retain) UICollectionView * predictionsCollectionView;              //@synthesize predictionsCollectionView=_predictionsCollectionView - In the implementation block
@property (assign,nonatomic) BOOL isHandlingKeyboardFrameChanged;                       //@synthesize isHandlingKeyboardFrameChanged=_isHandlingKeyboardFrameChanged - In the implementation block
@property (assign,nonatomic) BOOL showTTYPredictions;                                   //@synthesize showTTYPredictions=_showTTYPredictions - In the implementation block
@property (nonatomic,retain) NSArray * ttyAbbreviations;                                //@synthesize ttyAbbreviations=_ttyAbbreviations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityIdentifier;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)inputAccessoryView;
-(long long)keyboardAppearance;
-(BOOL)disableInputBars;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)keyCommands;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(BOOL)_accessibilityIsRealtimeElement;
-(void)updateTTYBar;
-(void)overrideTTYPredictionsHidden:(BOOL)arg1 ;
-(double)ttyBarHeight;
-(void)setShowTTYPredictions:(BOOL)arg1 ;
-(void)_kbFrameChanged:(id)arg1 ;
-(void)_loadTTYAbbreviations;
-(float)_predictionsCellHeight;
-(void)setPredictionsCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)predictionsCollectionView;
-(void)setIsHandlingKeyboardFrameChanged:(BOOL)arg1 ;
-(void)_didPanPredictions:(id)arg1 ;
-(void)setTtyAbbreviations:(NSArray *)arg1 ;
-(float)_predictionsCellBuffer;
-(void)_updateBlackBarPositioning;
-(void)_tapTTYBarCell:(id)arg1 ;
-(NSArray *)ttyAbbreviations;
-(void)_updateTTYBarPosition;
-(int)_predictionsPerPage;
-(BOOL)isHandlingKeyboardFrameChanged;
-(void)_resetTTYBarPosition;
-(BOOL)_isKeyboardPredictionsEnabled;
-(void)_insertWhitespaceIfNeeded;
-(void)_didSwipeLeft:(id)arg1 ;
-(BOOL)showTTYPredictions;
@end

