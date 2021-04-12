/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BSMutableSettings* _otherSettingsObserverInfo;
	BOOL _iteratingObservers;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(void)removeAllObservers;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)_observeSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

