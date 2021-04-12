/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class _SFSettingsAlertItem;


@protocol _SFPageFormatMenuItemController <NSObject>
@property (nonatomic,readonly) _SFSettingsAlertItem * alertItem; 
@property (assign,nonatomic,__weak) id<_SFPageFormatMenuItemControllerDelegate> delegate; 
@required
-(_SFSettingsAlertItem *)alertItem;
-(id<_SFPageFormatMenuItemControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

