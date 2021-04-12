/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFSettingsAlertItem;


@protocol SFSettingsAlertItemView <NSObject>
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item; 
@property (assign,nonatomic) BOOL hidesSeparator; 
@property (assign,nonatomic) long long defaultBackgroundMode; 
@property (nonatomic,readonly) long long backgroundMode; 
@required
-(_SFSettingsAlertItem *)item;
-(void)setItem:(id)arg1;
-(BOOL)hidesSeparator;
-(void)setHidesSeparator:(BOOL)arg1;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1;
-(long long)defaultBackgroundMode;

@end

