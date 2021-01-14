/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UITableViewController *)tableViewController;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setTableView:(id)arg1 ;
-(void)dealloc;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_contentSizeDidChangeFrom:(CGSize)arg1 to:(CGSize)arg2 ;
@end

