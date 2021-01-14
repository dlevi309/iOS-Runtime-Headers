/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)preferredHeightForTraitCollection:(id)arg1 ;
-(BOOL)hidesExpandableButton;
-(id)_currentTextSuggestions;
-(void)_registerForNotifications;
-(void)_updateAutocorrectionList:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)arg1 ;
-(BOOL)_autocorrectionListContainsContinuousPathConversions:(id)arg1 ;
-(void)_registerAsAutocorrectionObserver;
-(TUIPredictionView *)predictionView;
-(void)_inputModeDidChange;
-(void)_throttledUpdateUIWithAutocorrectionList:(id)arg1 ;
-(void)_inputResponderDidChangeNotification:(id)arg1 ;
-(void)_performThrottledUpdateUIWithAutocorrectionList:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)autocorrectionController:(id)arg1 didUpdateAutocorrectionList:(id)arg2 ;
-(TIAutocorrectionList *)cachedAutocorrectionList;
-(BOOL)_isVisibleForAutocorrectionType:(long long)arg1 ;
-(void)predictionView:(id)arg1 didSelectCandidate:(id)arg2 ;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg1 ;
-(void)loadView;
-(void)setCachedAutocorrectionList:(TIAutocorrectionList *)arg1 ;
-(BOOL)isVisibleForInputDelegate:(id)arg1 inputViews:(id)arg2 ;
-(NSArray *)displayedCandidates;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

