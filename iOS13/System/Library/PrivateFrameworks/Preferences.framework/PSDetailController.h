/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic,__weak) PSEditingPane * pane; 
-(void)dealloc;
-(void)suspend;
-(id)title;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)viewDidUnload;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(CGRect)paneFrame;
-(void)setPane:(PSEditingPane *)arg1 ;
-(void)loadPane;
-(PSEditingPane *)pane;
-(void)saveChanges;
@end

