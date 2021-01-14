/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>

@class PSEditingPane;

@interface PSDetailController : PSViewController {

	PSEditingPane* _pane;

}

@property (assign,nonatomic,__weak) PSEditingPane * pane; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(PSEditingPane *)pane;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)suspend;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGRect)paneFrame;
-(void)viewDidUnload;
-(void)setPane:(PSEditingPane *)arg1 ;
-(void)loadPane;
-(void)loadView;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)title;
-(void)dealloc;
-(void)saveChanges;
@end

