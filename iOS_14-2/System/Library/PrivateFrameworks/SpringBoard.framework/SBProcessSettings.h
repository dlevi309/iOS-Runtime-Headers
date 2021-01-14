/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/SBProcessSettings.h>

@protocol SBProcessSettings <NSObject>
@required
-(id)copyProcessSettings;
-(void)clearProcessSettings;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
-(BOOL)boolForProcessSetting:(long long)arg1;
-(id)objectForProcessSetting:(long long)arg1;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
-(long long)flagForProcessSetting:(long long)arg1;
-(void)applyProcessSettings:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBProcessSettings : NSObject <BSSettingDescriptionProvider, SBProcessSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)copyProcessSettings;
-(void)clearProcessSettings;
-(id)init;
-(void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)boolForProcessSetting:(long long)arg1 ;
-(id)objectForProcessSetting:(long long)arg1 ;
-(void)setObject:(id)arg1 forProcessSetting:(long long)arg2 ;
-(NSString *)description;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(long long)flagForProcessSetting:(long long)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)applyProcessSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

