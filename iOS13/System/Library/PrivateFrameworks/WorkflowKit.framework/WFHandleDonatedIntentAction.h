/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {

	BOOL _forceExecutionOnPhone;
	INIntent* _intent;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,readonly) BOOL forceExecutionOnPhone;              //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) INIntent * intent;                         //@synthesize intent=_intent - In the implementation block
+(id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 groupIdentifier:(id)arg3 error:(id*)arg4 ;
-(id)name;
-(id)localizedName;
-(NSString *)groupIdentifier;
-(NSString *)title;
-(NSString *)subtitle;
-(INIntent *)intent;
-(id)localizedSubtitle;
-(void)setIntent:(INIntent *)arg1 ;
-(id)appIdentifier;
-(long long)intentCategory;
-(id)intentDescription;
-(id)initWithIntent:(id)arg1 ;
-(void)initializeParameters;
-(id)localizedDescriptionSummary;
-(id)initWithIntent:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(void)continueInAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)serializedParameters;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithInput:(id)arg1 error:(id*)arg2 ;
-(id)slots;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(id)requiredResources;
-(BOOL)forceExecutionOnPhone;
@end

