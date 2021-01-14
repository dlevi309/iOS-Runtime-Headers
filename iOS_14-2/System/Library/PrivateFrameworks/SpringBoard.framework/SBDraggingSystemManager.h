/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dragSessionDidEnd:(id)arg1 ;
-(id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)arg1 ;
-(void)dragSessionDidBegin:(id)arg1 ;
-(void)setCommandeered:(BOOL)arg1 forDraggingSystemSession:(id)arg2 forReason:(id)arg3 ;
-(void)setCommandeered:(BOOL)arg1 forDropSession:(id)arg2 forReason:(id)arg3 ;
@end

