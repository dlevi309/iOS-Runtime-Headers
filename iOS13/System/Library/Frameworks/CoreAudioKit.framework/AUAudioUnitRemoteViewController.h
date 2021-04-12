/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/AUAudioUnitHostViewProtocol.h>

@class NSString;

@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitHostViewProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
+(BOOL)isIOSMacExtension:(id)arg1 ;
+(void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;
@end

