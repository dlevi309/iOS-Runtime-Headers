/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AXHAShortcutUpdateProtocol.h>

@class HearingAidUIServer, HACCShortcutViewController, NSString;

@interface AXHearingAidDisplayController : UIViewController <AXHAShortcutUpdateProtocol> {

	HearingAidUIServer* _parentController;
	HACCShortcutViewController* _moduleUIController;

}

@property (nonatomic,retain) HACCShortcutViewController * moduleUIController;              //@synthesize moduleUIController=_moduleUIController - In the implementation block
@property (assign,nonatomic) HearingAidUIServer * parentController;                        //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentController:(HearingAidUIServer *)arg1 ;
-(HearingAidUIServer *)parentController;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(void)setModuleUIController:(HACCShortcutViewController *)arg1 ;
-(HACCShortcutViewController *)moduleUIController;
@end

