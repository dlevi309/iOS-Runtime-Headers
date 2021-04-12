/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class UIViewController, _WDActivityNode, NSMutableDictionary, NSMutableArray;

@interface WDUserActivityManager : NSObject {

	UIViewController* _rootViewController;
	_WDActivityNode* _topNode;
	_WDActivityNode* _currentNode;
	NSMutableDictionary* _indexedActivities;
	BOOL _recordActivities;
	NSMutableArray* _policies;

}

@property (nonatomic,readonly) NSMutableArray * policies;              //@synthesize policies=_policies - In the implementation block
@property (assign,nonatomic) BOOL recordActivities;                    //@synthesize recordActivities=_recordActivities - In the implementation block
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(id)init;
-(id)_userActivityWithType:(id)arg1 ;
-(void)_resetActivities;
-(void)_setCurrentNodeToResponder:(id)arg1 ;
-(void)setRecordActivities:(BOOL)arg1 ;
-(void)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2 title:(id)arg3 keywords:(id)arg4 ;
-(void)restoreFromUserActivity:(id)arg1 ;
-(BOOL)recordActivities;
-(NSMutableArray *)policies;
-(void)addPolicy:(id)arg1 ;
-(void)setRootViewController:(id)arg1 ;
-(void)_userActivityWithTitle:(id)arg1 keywords:(id)arg2 activityType:(id)arg3 ;
-(void)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3 ;
-(BOOL)_restoreActivityFromPolicies:(id)arg1 ;
-(void)_restoreFromActivityChain:(id)arg1 ;
@end

