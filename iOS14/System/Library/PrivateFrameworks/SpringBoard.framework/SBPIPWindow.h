/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>

@class NSArray;

@interface SBPIPWindow : SBWindow

@property (nonatomic,readonly) NSArray * containerViewControllers; 
-(id)init;
-(BOOL)isActive;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRootViewController:(id)arg1 ;
-(long long)interfaceOrientationForContainerViewController:(id)arg1 ;
-(id)_pipWindowRootVC;
-(NSArray *)containerViewControllers;
-(void)addContainerViewController:(id)arg1 ;
-(void)removeContainerViewController:(id)arg1 ;
-(id)containerViewControllerForPictureInPictureViewController:(id)arg1 ;
-(void)updateActiveInterfaceOrientationForManualPictureInPictureStart;
@end

