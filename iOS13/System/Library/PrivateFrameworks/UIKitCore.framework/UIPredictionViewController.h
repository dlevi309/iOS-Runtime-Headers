/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUIPredictionViewDelegate.h>
#import <UIKit/UIKeyboardAutocorrectionObserver.h>
#import <UIKit/UIPredictiveViewController.h>

@class NSTimer, NSDate, TUIPredictionView, TIAutocorrectionList, NSString, NSArray;

@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {

	NSTimer* _updateUITimer;
	NSDate* _lastUIUpdateTime;
	TUIPredictionView* _predictionView;
	TIAutocorrectionList* _cachedAutocorrectionList;

}

@property (nonatomic,retain) TIAutocorrectionList * cachedAutocorrectionList;              //@synthesize cachedAutocorrectionList=_cachedAutocorrectionList - In the implementation block
@property (nonatomic,readonly) TUIPredictionView * predictionView;                         //@synthesize predictionView=_predictionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayedCandidates; 
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(BOOL)hidesExpandableButton;
-(NSArray *)displayedCandidates;
-(void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2 ;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg1 ;
-(void)_registerForNotifications;
-(id)_currentTextSuggestions;
-(BOOL)_isVisibleForAutocorrectionType:(long long)arg1 ;
-(void)_inputModeDidChange;
-(void)_inputResponderDidChangeNotification:(id)arg1 ;
-(void)_registerAsAutocorrectionObserver;
-(void)_updateAutocorrectionList:(id)arg1 ;
-(TUIPredictionView *)predictionView;
-(BOOL)_autocorrectionListIsNull:(id)arg1 ;
-(BOOL)_autocorrectionListContainsContinuousPathConversions:(id)arg1 ;
-(void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1 ;
-(BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1 ;
-(void)_throttledUpdateUIWithAutocorrectionList:(id)arg1 ;
-(void)predictionView:(id)arg1 didSelectCandidate:(id)arg2 ;
-(TIAutocorrectionList *)cachedAutocorrectionList;
-(void)setCachedAutocorrectionList:(TIAutocorrectionList *)arg1 ;
@end

