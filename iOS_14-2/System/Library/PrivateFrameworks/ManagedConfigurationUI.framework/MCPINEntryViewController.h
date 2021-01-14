/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/DevicePINController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol DevicePINControllerDelegate;
@class NSString;

@interface MCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate> {

	id<DevicePINControllerDelegate> _delegate;
	unsigned long long _style;

}

@property (assign,nonatomic,__weak) id<DevicePINControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateStyle;
-(id)init;
-(id<DevicePINControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)stringsBundle;
-(id)stringsTable;
-(void)setDelegate:(id<DevicePINControllerDelegate>)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

