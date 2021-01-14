/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setParentController:(HearingAidUIServer *)arg1 ;
-(HearingAidUIServer *)parentController;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(void)setModuleUIController:(HACCShortcutViewController *)arg1 ;
-(HACCShortcutViewController *)moduleUIController;
@end

