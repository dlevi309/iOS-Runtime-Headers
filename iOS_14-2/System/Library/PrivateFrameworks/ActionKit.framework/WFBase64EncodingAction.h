/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

