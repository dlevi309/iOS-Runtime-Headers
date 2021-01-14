/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SFSettingsAlertItemView.h>

@protocol SFSettingsAlertItemViewDelegate;
@class _SFSettingsAlertItemBackgroundView, UIView, _SFSettingsAlertItem, NSString;

@interface _SFSettingsAlertCustomViewContainer : UIView <SFSettingsAlertItemView> {

	_SFSettingsAlertItemBackgroundView* _backgroundView;
	BOOL _hidesSeparator;
	id<SFSettingsAlertItemViewDelegate> _delegate;
	UIView* _contentView;
	_SFSettingsAlertItem* _item;
	long long _defaultBackgroundMode;

}

@property (nonatomic,readonly) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item;                               //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                                              //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (assign,nonatomic) long long defaultBackgroundMode;                                  //@synthesize defaultBackgroundMode=_defaultBackgroundMode - In the implementation block
@property (nonatomic,readonly) long long backgroundMode; 
@property (assign,nonatomic,__weak) id<SFSettingsAlertItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SFSettingsAlertItemViewDelegate>)delegate;
-(_SFSettingsAlertItem *)item;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)setItem:(_SFSettingsAlertItem *)arg1 ;
-(void)setDelegate:(id<SFSettingsAlertItemViewDelegate>)arg1 ;
-(long long)defaultBackgroundMode;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1 ;
-(UIView *)contentView;
-(BOOL)hidesSeparator;
@end

