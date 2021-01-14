/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(void)evaluateWithInspector:(id)arg1 context:(void*)arg2 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(void)inspectChangesWithBlock:(/*^block*/id)arg1 ;
-(NSString *)description;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithChanges:(id)arg1 fromSettings:(id)arg2 toSettings:(id)arg3 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)inspectOtherChangesWithBlock:(/*^block*/id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg1 ;
-(id)_initWithChanges:(id)arg1 otherSettingsDiff:(id)arg2 settingsClass:(Class)arg3 ;
-(void)dealloc;
@end

