/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@protocol WFActionExtendedOperation;
@class WFSpeakTextActionOperation;

@interface WFSpeakTextAction : WFAction {

	id<WFActionExtendedOperation> _extendedOperation;
	WFSpeakTextActionOperation* _runningOperation;

}

@property (nonatomic,retain) WFSpeakTextActionOperation * runningOperation;              //@synthesize runningOperation=_runningOperation - In the implementation block
-(void)cancel;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)extendedOperation;
-(void)setExtendedOperation:(id)arg1 ;
-(id)voicePickerParameter;
-(WFSpeakTextActionOperation *)runningOperation;
-(void)setRunningOperation:(WFSpeakTextActionOperation *)arg1 ;
@end

