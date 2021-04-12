/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <libobjc.A.dylib/SBIconListViewDraggingPolicyHandling.h>

@class NSMapTable, NSString;

@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling> {

	NSMapTable* _sourceURLsByOperationMapTable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(BOOL)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2 ;
-(void)handleSpringLoadOnIconView:(id)arg1 ;
-(void)_removeAnySourceURLForOperation:(id)arg1 ;
-(id)_currentDraggingIconViewInView:(id)arg1 forLocation:(CGPoint)arg2 ;
-(id)_bestSupportedUTIForDragItem:(id)arg1 supportedTypes:(id)arg2 ;
@end

