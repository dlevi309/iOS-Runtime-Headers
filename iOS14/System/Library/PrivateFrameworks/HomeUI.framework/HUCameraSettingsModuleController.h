/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString;

@interface HUCameraSettingsModuleController : HUItemTableModuleController <UITextViewDelegate> {

	BOOL _useProxSetupPresentationStyle;

}

@property (assign,nonatomic) BOOL useProxSetupPresentationStyle;              //@synthesize useProxSetupPresentationStyle=_useProxSetupPresentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHost:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(void)viewSizeDidChanged;
-(BOOL)useProxSetupPresentationStyle;
-(void)setUseProxSetupPresentationStyle:(BOOL)arg1 ;
@end

