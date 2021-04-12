/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)notes;
-(void)updateTextView;
-(id)init;
-(void)setNotes:(NSString *)arg1 ;
-(void)_updateConstraints;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewDidLoad;
-(void)loadTextView;
-(void)loadView;
@end

