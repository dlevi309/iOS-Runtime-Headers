/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@class NSArray;

@interface WFOpenInAction : WFAction {

	NSArray* _contentClasses;

}

@property (nonatomic,retain) NSArray * contentClasses;              //@synthesize contentClasses=_contentClasses - In the implementation block
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(id)inputContentClasses;
-(id)targetContentAttribution;
-(NSArray *)contentClasses;
-(void)setContentClasses:(NSArray *)arg1 ;
-(void)openContentInSelectedApp:(id)arg1 ;
-(void)updateContentClasses;
-(id)selectedApp;
@end

