/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFSettingsAlertItem;


@protocol SFSettingsAlertItemView <NSObject>
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item; 
@property (assign,nonatomic) BOOL hidesSeparator; 
@property (assign,nonatomic) long long defaultBackgroundMode; 
@property (nonatomic,readonly) long long backgroundMode; 
@property (assign,nonatomic,__weak) id<SFSettingsAlertItemViewDelegate> delegate; 
@required
-(id<SFSettingsAlertItemViewDelegate>)delegate;
-(_SFSettingsAlertItem *)item;
-(void)setHidesSeparator:(BOOL)arg1;
-(void)setItem:(id)arg1;
-(void)setDelegate:(id)arg1;
-(long long)defaultBackgroundMode;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1;
-(BOOL)hidesSeparator;

@end

