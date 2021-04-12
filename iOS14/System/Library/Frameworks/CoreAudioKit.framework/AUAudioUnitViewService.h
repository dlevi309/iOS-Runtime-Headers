/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/UIViewController.h>

@class AURemoteExtensionContext;

@interface AUAudioUnitViewService : UIViewController {

	AURemoteExtensionContext* _auRemoteExtensionContext;

}

@property (assign) AURemoteExtensionContext * auRemoteExtensionContext;              //@synthesize auRemoteExtensionContext=_auRemoteExtensionContext - In the implementation block
-(void)loadView;
-(void)dealloc;
-(AURemoteExtensionContext *)auRemoteExtensionContext;
-(void)initializeBlankView;
-(void)setAuRemoteExtensionContext:(AURemoteExtensionContext *)arg1 ;
-(void)connectChildView;
@end

