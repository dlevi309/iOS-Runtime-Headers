/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFSettingsAlertItemView.h>

@class _SFSettingsAlertItemBackgroundView, UIView, _SFSettingsAlertItem, NSString;

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {

	_SFSettingsAlertItemBackgroundView* _backgroundView;
	BOOL _hidesSeparator;
	UIView* _contentView;
	_SFSettingsAlertItem* _item;
	long long _defaultBackgroundMode;

}

@property (nonatomic,readonly) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item;              //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                             //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (assign,nonatomic) long long defaultBackgroundMode;                 //@synthesize defaultBackgroundMode=_defaultBackgroundMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long backgroundMode; 
-(_SFSettingsAlertItem *)item;
-(void)setItem:(_SFSettingsAlertItem *)arg1 ;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(BOOL)hidesSeparator;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1 ;
-(long long)defaultBackgroundMode;
@end

