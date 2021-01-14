/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSMutableArray;

@interface WFActionDonationSet : NSObject {

	NSMutableArray* _predictedActions;
	NSMutableArray* _recentActions;
	NSMutableArray* _appSuggestedActions;

}

@property (nonatomic,readonly) NSMutableArray * predictedActions;                 //@synthesize predictedActions=_predictedActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * recentActions;                    //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * appSuggestedActions;              //@synthesize appSuggestedActions=_appSuggestedActions - In the implementation block
-(id)init;
-(NSMutableArray *)recentActions;
-(NSMutableArray *)appSuggestedActions;
-(NSMutableArray *)predictedActions;
@end

