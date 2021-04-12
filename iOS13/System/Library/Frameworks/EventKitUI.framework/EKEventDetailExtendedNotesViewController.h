/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;
	NSString* _notes;

}

@property (nonatomic,copy) NSString * notes;                                                        //@synthesize notes=_notes - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
@property (assign,nonatomic) BOOL useCustomBackButton; 
-(id)init;
-(void)loadView;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewSafeAreaInsetsDidChange;
-(void)_updateConstraints;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)loadTextView;
-(void)updateTextView;
@end

