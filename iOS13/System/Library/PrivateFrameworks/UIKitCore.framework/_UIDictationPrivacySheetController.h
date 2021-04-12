/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UINavigationController.h>

@protocol _UIDictationPrivacySheetControllerDelegate;
@class OBPrivacyPresenter, VTUIDictationDataSharingOptInPresenter;

@interface _UIDictationPrivacySheetController : UINavigationController {

	id<_UIDictationPrivacySheetControllerDelegate> _privacyDelegate;
	OBPrivacyPresenter* _privacyPresenter;
	long long _sheetType;
	VTUIDictationDataSharingOptInPresenter* _dataSharingOptInPresenter;

}

@property (assign,nonatomic) id<_UIDictationPrivacySheetControllerDelegate> privacyDelegate;                  //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
@property (nonatomic,retain) OBPrivacyPresenter * privacyPresenter;                                           //@synthesize privacyPresenter=_privacyPresenter - In the implementation block
@property (assign,nonatomic) long long sheetType;                                                             //@synthesize sheetType=_sheetType - In the implementation block
@property (nonatomic,retain) VTUIDictationDataSharingOptInPresenter * dataSharingOptInPresenter;              //@synthesize dataSharingOptInPresenter=_dataSharingOptInPresenter - In the implementation block
-(void)dealloc;
-(id)initWithType:(long long)arg1 ;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(id<_UIDictationPrivacySheetControllerDelegate>)privacyDelegate;
-(VTUIDictationDataSharingOptInPresenter *)dataSharingOptInPresenter;
-(void)setPresentationDelegate:(id)arg1 ;
-(void)setPrivacyDelegate:(id<_UIDictationPrivacySheetControllerDelegate>)arg1 ;
-(OBPrivacyPresenter *)privacyPresenter;
-(void)setPrivacyPresenter:(OBPrivacyPresenter *)arg1 ;
-(long long)sheetType;
-(void)setSheetType:(long long)arg1 ;
-(void)setDataSharingOptInPresenter:(VTUIDictationDataSharingOptInPresenter *)arg1 ;
@end

