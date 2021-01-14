/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SFSettingsAlertItemView.h>

@protocol SFSettingsAlertItemViewDelegate;
@class _SFSettingsAlertItem, _SFSettingsAlertItemBackgroundView, NSString;

@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView> {

	BOOL _hidesSeparator;
	id<SFSettingsAlertItemViewDelegate> _delegate;
	_SFSettingsAlertItem* _item;
	_SFSettingsAlertItemBackgroundView* _backgroundView;
	long long _defaultBackgroundMode;

}

@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item;                                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                                                //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,readonly) _SFSettingsAlertItemBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) long long defaultBackgroundMode;                                    //@synthesize defaultBackgroundMode=_defaultBackgroundMode - In the implementation block
@property (nonatomic,readonly) long long backgroundMode; 
@property (assign,nonatomic,__weak) id<SFSettingsAlertItemViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateBackgroundView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SFSettingsAlertItemViewDelegate>)delegate;
-(_SFSettingsAlertItemBackgroundView *)backgroundView;
-(_SFSettingsAlertItem *)item;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(void)setItem:(_SFSettingsAlertItem *)arg1 ;
-(void)setDelegate:(id<SFSettingsAlertItemViewDelegate>)arg1 ;
-(long long)defaultBackgroundMode;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1 ;
-(BOOL)hidesSeparator;
-(void)setHighlighted:(BOOL)arg1 ;
@end

