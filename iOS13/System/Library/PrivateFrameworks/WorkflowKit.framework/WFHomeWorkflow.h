/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSData, WFWorkflow, HFTriggerActionsSetsUISummary, NSString, NSArray;

@interface WFHomeWorkflow : NSObject {

	NSData* _data;
	WFWorkflow* _workflow;
	HFTriggerActionsSetsUISummary* _actionSetsSummary;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerActionsSetsUISummary * actionSetsSummary;              //@synthesize actionSetsSummary=_actionSetsSummary - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString; 
@property (nonatomic,copy,readonly) NSArray * summaryIconNames; 
@property (nonatomic,copy,readonly) NSArray * summaryIconDescriptors; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
+(void)setCachedHomes:(id)arg1 ;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(NSString *)summaryString;
-(BOOL)requiresDeviceUnlock;
-(NSArray *)summaryIconNames;
-(NSArray *)summaryIconDescriptors;
-(HFTriggerActionsSetsUISummary *)actionSetsSummary;
-(id)triggerActionSetsBuilders;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg1 ;
-(void)setActionSetsSummary:(HFTriggerActionsSetsUISummary *)arg1 ;
@end

