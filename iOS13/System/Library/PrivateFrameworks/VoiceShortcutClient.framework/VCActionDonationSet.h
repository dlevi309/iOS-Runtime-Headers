/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/


@class NSMutableArray;

@interface VCActionDonationSet : NSObject {

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

