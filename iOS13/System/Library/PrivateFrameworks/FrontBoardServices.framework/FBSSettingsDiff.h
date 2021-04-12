/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>

@class BSSettings, BSSettingsDiff, NSString;

@interface FBSSettingsDiff : NSObject <BSXPCCoding, BSSettingDescriptionProvider> {

	BSSettings* _changes;
	BSSettingsDiff* _otherSettingsDiff;
	Class _settingsClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(void)evaluateWithInspector:(id)arg1 context:(void*)arg2 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg1 ;
-(id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3 ;
-(id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3 ;
-(void)inspectOtherChangesWithBlock:(/*^block*/id)arg1 ;
@end

