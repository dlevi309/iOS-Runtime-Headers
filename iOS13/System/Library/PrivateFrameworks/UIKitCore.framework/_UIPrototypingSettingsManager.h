/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

