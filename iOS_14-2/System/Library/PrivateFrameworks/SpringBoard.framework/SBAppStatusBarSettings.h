/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BSMutableSettings, BSSettings, NSNumber, _UILegibilitySettings, NSString;

@interface SBAppStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying> {

	BSMutableSettings* _settings;

}

@property (getter=_BSSettings,nonatomic,readonly) BSSettings * BSSettings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSNumber * alpha; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) int styleOverridesToCancel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSNumber *)alpha;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_BSSettings;
-(NSString *)description;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_initWithBSSettings:(id)arg1 ;
-(unsigned long long)hash;
-(int)styleOverridesToCancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

