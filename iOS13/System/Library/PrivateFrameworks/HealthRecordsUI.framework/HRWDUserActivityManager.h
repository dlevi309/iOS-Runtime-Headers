/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@class UIViewController, _HRWDActivityNode, NSMutableDictionary, NSMutableArray;

@interface HRWDUserActivityManager : NSObject {

	UIViewController* _rootViewController;
	_HRWDActivityNode* _topNode;
	_HRWDActivityNode* _currentNode;
	NSMutableDictionary* _indexedActivities;
	BOOL _recordActivities;
	NSMutableArray* _policies;

}

@property (nonatomic,readonly) NSMutableArray * policies;              //@synthesize policies=_policies - In the implementation block
@property (assign,nonatomic) BOOL recordActivities;                    //@synthesize recordActivities=_recordActivities - In the implementation block
-(id)init;
-(NSMutableArray *)policies;
-(void)setRootViewController:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)addPolicy:(id)arg1 ;
-(void)_userActivityWithTitle:(id)arg1 keywords:(id)arg2 activityType:(id)arg3 ;
-(void)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3 ;
-(BOOL)_restoreActivityFromPolicies:(id)arg1 ;
-(id)_castleRockSpotlightBreadcrumbs:(id)arg1 ;
-(id)_handoffActivityBreadcrumbsForOnboarding:(id)arg1 ;
-(id)_handoffActivityBreadcrumbsForSampleType:(id)arg1 ;
-(void)_restoreFromActivityChain:(id)arg1 ;
-(id)_userActivityWithType:(id)arg1 ;
-(void)_resetActivities;
-(void)_setCurrentNodeToResponder:(id)arg1 ;
-(void)setRecordActivities:(BOOL)arg1 ;
-(void)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 title:(id)arg3 keywords:(id)arg4 ;
-(void)restoreFromUserActivity:(id)arg1 ;
-(BOOL)recordActivities;
@end

