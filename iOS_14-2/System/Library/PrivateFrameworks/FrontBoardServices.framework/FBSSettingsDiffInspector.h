/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class BSMutableSettings;

@interface FBSSettingsDiffInspector : NSObject {

	BSMutableSettings* _observerInfo;
	BSMutableSettings* _otherSettingsObserverInfo;
	BOOL _iteratingObservers;

}
-(void)removeAllObservers;
-(void)_observeSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)succinctDescription;
-(void)observeOtherSetting:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_addObserver:(id)arg1 forSetting:(unsigned long long)arg2 inInfo:(id)arg3 ;
-(void)inspectDiff:(id)arg1 withContext:(void*)arg2 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

