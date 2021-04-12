/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/SBDeactivationSettings.h>

@protocol SBDeactivationSettings <NSObject>
@required
-(id)objectForDeactivationSetting:(unsigned)arg1;
-(void)applyDeactivationSettings:(id)arg1;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2;
-(long long)flagForDeactivationSetting:(unsigned)arg1;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2;
-(id)copyDeactivationSettings;
-(void)clearDeactivationSettings;

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
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(void)applyDeactivationSettings:(id)arg1 ;
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)copyDeactivationSettings;
-(void)clearDeactivationSettings;
@end

