/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<DevicePINControllerDelegate>)delegate;
-(void)setDelegate:(id<DevicePINControllerDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1 ;
-(void)_updateStyle;
-(id)stringsBundle;
-(id)stringsTable;
@end

