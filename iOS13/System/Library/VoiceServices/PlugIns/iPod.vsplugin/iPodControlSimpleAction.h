/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
*/

#import <VoiceServices/VSRecognitionAction.h>

@interface iPodControlSimpleAction : VSRecognitionAction
-(id)perform;
-(int)completionType;
-(id)performSimpleAction;
-(void)_completeThreadedPerform:(id)arg1 ;
-(BOOL)requiresThreadedPerform;
-(void)_performThreaded;
@end

