/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDragGestureRecognizer.h>
#import <UIKitCore/_UIDragEventRespondable.h>

@class NSString;

@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer <_UIDragEventRespondable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)_draggingUpdatedWithEvent:(id)arg1 ;
-(void)_draggingExitedWithEvent:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)_draggingEnteredWithEvent:(id)arg1 ;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
-(void)_draggingEndedWithEvent:(id)arg1 ;
-(void)spring;
@end

