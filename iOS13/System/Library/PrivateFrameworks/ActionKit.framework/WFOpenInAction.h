/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction {

	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;              //@synthesize contentClasses=_contentClasses - In the implementation block
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)inputContentClasses;
-(id)targetDataInfo;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
-(void)openContentInSelectedApp:(id)arg1 ;
-(void)updateContentClasses;
-(id)selectedApp;
@end

