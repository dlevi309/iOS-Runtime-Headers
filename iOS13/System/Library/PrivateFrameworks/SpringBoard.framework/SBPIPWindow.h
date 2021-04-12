/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@end

