/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction {

	BOOL _contentManaged;

}

@property (assign,getter=isContentManaged,nonatomic) BOOL contentManaged;              //@synthesize contentManaged=_contentManaged - In the implementation block
-(BOOL)isContentManaged;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedAccessResource;
-(BOOL)populatesInputFromInputParameter;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)targetDataInfo;
-(void)getRecipientsFromParameterKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateContentForIntents:(/*^block*/id)arg1 ;
-(void)generateFilesFromCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateEmailFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContentManaged:(BOOL)arg1 ;
@end

