/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

