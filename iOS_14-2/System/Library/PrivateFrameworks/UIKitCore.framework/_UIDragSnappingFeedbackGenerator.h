/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragFeedbackGenerator.h>

@class _UIDragSnappingFeedbackGeneratorConfiguration;

@interface _UIDragSnappingFeedbackGenerator : _UIDragFeedbackGenerator

@property (getter=_dragSnappingConfiguration,nonatomic,readonly) _UIDragSnappingFeedbackGeneratorConfiguration * dragSnappingConfiguration; 
+(Class)_configurationClass;
-(void)_stopLanding;
-(void)draggedObjectLanded;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)_startLanding;
-(void)draggedObjectLifted;
-(id)_dragSnappingConfiguration;
-(void)objectSnapped;
@end

