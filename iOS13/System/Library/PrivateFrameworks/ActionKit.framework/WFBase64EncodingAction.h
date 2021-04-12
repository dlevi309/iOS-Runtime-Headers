/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFBase64EncodingAction : WFAction
+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)inputContentClasses;
-(id)base64EncodedStringItemFromFile:(id)arg1 lineBreakMode:(id)arg2 ;
-(id)itemFromBase64EncodedString:(id)arg1 nameIfKnown:(id)arg2 ;
@end

