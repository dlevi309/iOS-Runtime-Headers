/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFWorkflow, NSData, HFTriggerActionsSetsUISummary, NSString, NSArray;

@interface WFHomeWorkflow : NSObject {

	WFWorkflow* _cachedWorkflow;
	NSData* _data;
	HFTriggerActionsSetsUISummary* _actionSetsSummary;

}

@property (nonatomic,retain) HFTriggerActionsSetsUISummary * actionSetsSummary;              //@synthesize actionSetsSummary=_actionSetsSummary - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString; 
@property (nonatomic,copy,readonly) NSArray * summaryIconNames; 
@property (nonatomic,copy,readonly) NSArray * summaryIconDescriptors; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
+(void)setCachedHomes:(id)arg1 ;
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(NSArray *)summaryIconDescriptors;
-(NSData *)data;
-(BOOL)requiresDeviceUnlock;
-(NSString *)summaryString;
-(HFTriggerActionsSetsUISummary *)actionSetsSummary;
-(NSArray *)summaryIconNames;
-(id)triggerActionSetsBuilders;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg1 ;
-(id)workflowWithEnvironment:(long long)arg1 error:(id*)arg2 ;
-(void)setActionSetsSummary:(HFTriggerActionsSetsUISummary *)arg1 ;
@end

