/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIDraggingSystemMonitorDelegate.h>

@class NSHashTable, NSMapTable, NSString;

@interface SBDraggingSystemManager : NSObject <UIDraggingSystemMonitorDelegate> {

	NSHashTable* _observers;
	NSMapTable* _commandeerReasons;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)arg1 ;
-(void)dragSessionDidBegin:(id)arg1 ;
-(void)dragSessionDidEnd:(id)arg1 ;
-(void)setCommandeered:(BOOL)arg1 forDraggingSystemSession:(id)arg2 forReason:(id)arg3 ;
-(void)setCommandeered:(BOOL)arg1 forDropSession:(id)arg2 forReason:(id)arg3 ;
@end

