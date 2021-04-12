/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <OnBoardingKit/OBTableWelcomeController.h>

@class UITableViewController, NSLayoutConstraint;

@interface STTableWelcomeController : OBTableWelcomeController {

	UITableViewController* _tableViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) UITableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTableView:(id)arg1 ;
-(UITableViewController *)tableViewController;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(void)_contentSizeDidChangeFrom:(CGSize)arg1 to:(CGSize)arg2 ;
@end

