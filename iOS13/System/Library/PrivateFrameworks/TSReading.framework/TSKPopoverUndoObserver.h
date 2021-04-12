/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSUndoManager, NSMutableSet;

@interface TSKPopoverUndoObserver : NSObject {

	NSUndoManager* mUndoManager;
	NSMutableSet* mPopoverBasedViewControllers;
	NSMutableSet* mPopoverControllers;

}

@property (nonatomic,retain) NSUndoManager * observedUndoManager; 
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)addPopoverController:(id)arg1 ;
-(void)removePopoverController:(id)arg1 ;
-(void)addPopoverBasedViewController:(id)arg1 ;
-(void)removePopoverBasedViewController:(id)arg1 ;
-(void)undoManagerWillUndo:(id)arg1 ;
-(void)undoManagerWillRedo:(id)arg1 ;
-(void)setObservedUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)observedUndoManager;
@end

