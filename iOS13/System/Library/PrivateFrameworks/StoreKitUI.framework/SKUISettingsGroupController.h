/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUISettingsGroupControllerDelegate;
@class NSMutableArray, SKUISettingsGroupDescription;

@interface SKUISettingsGroupController : NSObject {

	id<SKUISettingsGroupControllerDelegate> _delegate;
	NSMutableArray* _settingDescriptions;
	SKUISettingsGroupDescription* _settingsGroupDescription;

}

@property (assign,nonatomic,__weak) id<SKUISettingsGroupControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * settingDescriptions;                                 //@synthesize settingDescriptions=_settingDescriptions - In the implementation block
@property (nonatomic,retain) SKUISettingsGroupDescription * settingsGroupDescription;              //@synthesize settingsGroupDescription=_settingsGroupDescription - In the implementation block
-(id<SKUISettingsGroupControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUISettingsGroupControllerDelegate>)arg1 ;
-(void)attachSettingDescription:(id)arg1 ;
-(NSMutableArray *)settingDescriptions;
-(id)_viewForSettingDescription:(id)arg1 ;
-(SKUISettingsGroupDescription *)settingsGroupDescription;
-(void)_reloadSettingDescription:(id)arg1 ;
-(void)setSettingDescriptions:(NSMutableArray *)arg1 ;
-(void)setSettingsGroupDescription:(SKUISettingsGroupDescription *)arg1 ;
@end

