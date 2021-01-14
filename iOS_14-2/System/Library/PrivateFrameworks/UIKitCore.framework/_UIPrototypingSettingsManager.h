/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary, NSArray;

@interface _UIPrototypingSettingsManager : NSObject {

	NSMutableDictionary* _storedSettings;

}

@property (nonatomic,retain) NSMutableDictionary * storedSettings;              //@synthesize storedSettings=_storedSettings - In the implementation block
@property (nonatomic,readonly) NSArray * allSettings; 
+(id)sharedManager;
-(id)init;
-(NSArray *)allSettings;
-(void)synchronizeStoredSettings;
-(id)settingOfType:(long long)arg1 withName:(id)arg2 ;
-(void)deleteAllStoredSettings;
-(NSMutableDictionary *)storedSettings;
-(void)setStoredSettings:(NSMutableDictionary *)arg1 ;
@end

