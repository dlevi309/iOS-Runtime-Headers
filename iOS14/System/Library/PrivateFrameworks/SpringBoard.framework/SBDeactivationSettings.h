/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/SBDeactivationSettings.h>

@protocol SBDeactivationSettings <NSObject>
@required
-(void)applyDeactivationSettings:(id)arg1;
-(void)clearDeactivationSettings;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2;
-(id)copyDeactivationSettings;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2;
-(id)objectForDeactivationSetting:(unsigned)arg1;
-(long long)flagForDeactivationSetting:(unsigned)arg1;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)applyDeactivationSettings:(id)arg1 ;
-(void)clearDeactivationSettings;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(NSString *)description;
-(id)copyDeactivationSettings;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEmpty;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(void)dealloc;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
@end

