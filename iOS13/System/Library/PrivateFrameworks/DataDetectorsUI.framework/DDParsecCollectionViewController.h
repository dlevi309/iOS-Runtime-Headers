/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DDParsecHostVCInterface.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@protocol DDParsecCollectionDelegate;
@class _UIRemoteViewController, DDParsecRemoteCollectionViewController, NSString, DDScannerResult, NSDictionary, UITapGestureRecognizer, NSArray;

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining> {

	DDParsecRemoteCollectionViewController* _remoteViewController;
	BOOL _previewMode;
	BOOL _sheetMode;
	BOOL _needsBackground;
	NSString* _queryString;
	NSRange _queryRange;
	DDScannerResult* _result;
	NSDictionary* _context;
	BOOL _showingError;
	BOOL _showingFTE;
	UITapGestureRecognizer* _tapGesture;
	long long _previousStatusBarStyle;
	/*^block*/id _dismissCompletionHandler;
	long long _style;
	NSArray* _actions;
	id<DDParsecCollectionDelegate> _parsecDelegate;

}

@property (copy) NSArray * actions;                                                                   //@synthesize actions=_actions - In the implementation block
@property (__weak) id<DDParsecCollectionDelegate> parsecDelegate;                                     //@synthesize parsecDelegate=_parsecDelegate - In the implementation block
@property (copy) id dismissCompletionHandler;                                                         //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,nonatomic) long long style;                                                         //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSArray *)actions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(BOOL)_allowsStylingSheetsAsCards;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(id)initWithString:(id)arg1 range:(NSRange)arg2 ;
-(void)showSpinner;
-(void)showError:(id)arg1 ;
-(void)appWillEnterForeground;
-(void)appDidEnterBackground;
-(void)interactionEndedWithPunchout:(BOOL)arg1 ;
-(void)setSheetMode:(BOOL)arg1 ;
-(void)showingErrorView:(BOOL)arg1 ;
-(void)showingFTE:(BOOL)arg1 ;
-(void)openParsecURL:(id)arg1 ;
-(void)getStatusBarHidden:(/*^block*/id)arg1 ;
-(void)openTrailerPunchout:(id)arg1 ;
-(void)fetchRemoteViewControllerWithValidInput:(BOOL)arg1 ;
-(void)_interactionEnded;
-(void)updateVisualMode;
-(void)doneButtonPressed:(id)arg1 punchout:(BOOL)arg2 ;
-(void)presentRemoteCollection:(id)arg1 ;
-(void)replaceControllerWithController:(id)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(id<DDParsecCollectionDelegate>)parsecDelegate;
-(void)setParsecDelegate:(id<DDParsecCollectionDelegate>)arg1 ;
-(id)initWithResult:(DDResultRef)arg1 context:(id)arg2 ;
@end

