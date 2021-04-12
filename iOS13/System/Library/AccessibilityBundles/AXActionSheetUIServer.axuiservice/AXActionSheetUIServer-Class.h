/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/AXActionSheetUIServer.axuiservice/AXActionSheetUIServer
*/

#import <AXActionSheetUIServer/AXUIAlertDelegate.h>
#import <AXActionSheetUIServer/AXUIService.h>
#import <AXActionSheetUIServer/AXUIContentViewControllerDelegate.h>

@class UIAlertController, UIViewController, NSMutableSet, NSString;

@interface AXActionSheetUIServer : NSObject <AXUIAlertDelegate, AXUIService, AXUIContentViewControllerDelegate> {

	UIAlertController* _alertController;
	UIViewController* _emptyViewController;
	NSMutableSet* _actionSheetClients;
	NSString* _alertIdentifier;

}

@property (nonatomic,retain) NSString * alertIdentifier;              //@synthesize alertIdentifier=_alertIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)alertWithIdentifierDidDisappear:(id)arg1 ;
-(void)alertWithIdentifierWasActivated:(id)arg1 ;
-(void)_informClientOfChoice:(long long)arg1 ;
-(NSString *)alertIdentifier;
-(void)setAlertIdentifier:(NSString *)arg1 ;
@end

