/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragFeedbackGenerator.h>

@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (getter=_dragSnappingConfiguration,nonatomic,readonly) _UIDragSnappingFeedbackGeneratorConfiguration * dragSnappingConfiguration; 
+(Class)_configurationClass;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)objectSnapped;
-(void)draggedObjectLifted;
-(void)draggedObjectLanded;
-(void)_stopLanding;
-(void)_startLanding;
-(id)_dragSnappingConfiguration;
@end

