/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TPAlert.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class SBSRemoteAlertHandle, NSString, NSSet, BSProcessHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _remoteAlertHandle;
	/*^block*/id _dialAction;
	NSString* _buttonTitle;
	NSSet* _handles;
	BSProcessHandle* _processHandle;

}

@property (nonatomic,retain) SBSRemoteAlertHandle * remoteAlertHandle;              //@synthesize remoteAlertHandle=_remoteAlertHandle - In the implementation block
@property (nonatomic,copy) id dialAction;                                           //@synthesize dialAction=_dialAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                         //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * handles;                                //@synthesize handles=_handles - In the implementation block
@property (nonatomic,readonly) BSProcessHandle * processHandle;                     //@synthesize processHandle=_processHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)title;
-(BSProcessHandle *)processHandle;
-(NSSet *)handles;
-(NSString *)buttonTitle;
-(void)show;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)defaultButtonTitle;
-(id)otherButtonTitle;
-(id)initWithDialRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(id)initWithButtonTitle:(id)arg1 handles:(id)arg2 dialAction:(/*^block*/id)arg3 ;
-(id)phoneNumberHandle;
-(void)defaultResponse;
-(void)otherResponse;
-(SBSRemoteAlertHandle *)remoteAlertHandle;
-(void)setRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(id)dialAction;
-(id)initWithJoinRequest:(id)arg1 dialAction:(/*^block*/id)arg2 ;
-(void)setDialAction:(id)arg1 ;
@end

