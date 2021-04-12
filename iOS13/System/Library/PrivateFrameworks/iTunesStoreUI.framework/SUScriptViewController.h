/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, UIViewController, NSString, SUScriptNavigationController, SUScriptNavigationItem, SUScriptPopOver, SUScriptSection, SUScriptSplitViewController;

@interface SUScriptViewController : SUScriptObject {

	NSArray* _scriptToolbarItems;

}

@property (readonly) SUScriptViewController * volumeViewController; 
@property (nonatomic,retain) UIViewController * nativeViewController; 
@property (retain) id backgroundColor; 
@property (readonly) NSString * contextDictionary; 
@property (retain) SUScriptViewController * inputAccessoryViewController; 
@property (retain) NSString * modalPresentationStyle; 
@property (readonly) SUScriptViewController * modalViewController; 
@property (readonly) SUScriptNavigationController * navigationController; 
@property (readonly) SUScriptNavigationItem * navigationItem; 
@property (readonly) SUScriptPopOver * popOver; 
@property (readonly) SUScriptViewController * presentingViewController; 
@property (retain) SUScriptSection * section; 
@property (assign) id showsLibraryButton; 
@property (readonly) SUScriptSplitViewController * splitViewController; 
@property (copy) id toolbarItems; 
@property (retain) id topBackgroundColor; 
@property (retain) SUScriptViewController * transientViewController; 
@property (assign) id usesBlurredBackground; 
@property (assign) id wantsFullScreenLayout; 
@property (readonly) NSString * modalPresentationStyleNameFormSheet; 
@property (readonly) NSString * modalPresentationStyleNameFullScreen; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(id)backgroundColor;
-(void)setBackgroundColor:(id)arg1 ;
-(SUScriptSection *)section;
-(SUScriptViewController *)presentingViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalPresentationStyle:(NSString *)arg1 ;
-(SUScriptNavigationItem *)navigationItem;
-(SUScriptNavigationController *)navigationController;
-(void)setSection:(SUScriptSection *)arg1 ;
-(SUScriptSplitViewController *)splitViewController;
-(NSString *)modalPresentationStyle;
-(SUScriptViewController *)transientViewController;
-(void)setTransientViewController:(SUScriptViewController *)arg1 ;
-(id)toolbarItems;
-(void)setWantsFullScreenLayout:(id)arg1 ;
-(void)dismissModalViewControllerAnimated:(BOOL)arg1 ;
-(void)setToolbarItems:(id)arg1 ;
-(id)wantsFullScreenLayout;
-(SUScriptViewController *)modalViewController;
-(void)presentModalViewController:(id)arg1 withTransition:(id)arg2 ;
-(void)dismissModalViewControllerWithTransition:(id)arg1 ;
-(void)setToolbarItems:(id)arg1 animated:(BOOL)arg2 ;
-(SUScriptViewController *)inputAccessoryViewController;
-(id)attributeKeys;
-(NSString *)contextDictionary;
-(id)scriptAttributeKeys;
-(UIViewController *)nativeViewController;
-(id)topBackgroundColor;
-(void)setTopBackgroundColor:(id)arg1 ;
-(void)setInputAccessoryViewController:(SUScriptViewController *)arg1 ;
-(void)setShowsLibraryButton:(id)arg1 ;
-(id)showsLibraryButton;
-(void)setNativeViewController:(UIViewController *)arg1 ;
-(id)usesBlurredBackground;
-(void)runScrollTest:(id)arg1 withDelta:(float)arg2 forIterations:(int)arg3 ;
-(void)tearDownUserInterface;
-(BOOL)equals:(id)arg1 ;
-(id)newNativeViewController;
-(void)_dismissModalViewControllerAnimated:(BOOL)arg1 ;
-(void)_dismissModalViewControllerWithTransition:(id)arg1 ;
-(void)_presentModalViewController:(id)arg1 withTransition:(id)arg2 ;
-(NSString *)modalPresentationStyleNameFormSheet;
-(NSString *)modalPresentationStyleNameFullScreen;
-(id)newScriptColorWithValue:(id)arg1 ;
-(void)setUsesBlurredBackground:(id)arg1 ;
-(int)_transitionForString:(id)arg1 ;
-(void)addPassbookPassWithURL:(id)arg1 ;
-(void)dismissVolumeViewControllerAnimated:(id)arg1 ;
-(void)presentVolumeViewController:(id)arg1 animated:(id)arg2 ;
-(SUScriptPopOver *)popOver;
-(id)_parentViewControllerForVolumeViewController;
-(SUScriptViewController *)volumeViewController;
@end

