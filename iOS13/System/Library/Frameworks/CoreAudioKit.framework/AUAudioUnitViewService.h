/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AUAudioUnitRemoteViewProtocol.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol> {

	AURemoteExtensionContext* _extensionContext;

}

@property (assign) AURemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)exportedInterface;
-(void)loadView;
-(AURemoteExtensionContext *)extensionContext;
-(void)setExtensionContext:(AURemoteExtensionContext *)arg1 ;
-(void)connectToContextWithSessionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_connectChildView:(/*^block*/id)arg1 ;
-(id)remoteViewControllerInterface;
@end

