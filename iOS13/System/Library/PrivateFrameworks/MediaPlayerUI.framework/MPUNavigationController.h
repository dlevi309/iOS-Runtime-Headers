/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <UIKitCore/UINavigationController.h>

@interface MPUNavigationController : UINavigationController {

	BOOL _supportsStandardInterfaceOrientations;
	/*^block*/id _overrideSupportedInterfaceOrientationsHandler;

}

@property (nonatomic,copy) id overrideSupportedInterfaceOrientationsHandler;              //@synthesize overrideSupportedInterfaceOrientationsHandler=_overrideSupportedInterfaceOrientationsHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsStandardInterfaceOrientations;                  //@synthesize supportsStandardInterfaceOrientations=_supportsStandardInterfaceOrientations - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(id)overrideSupportedInterfaceOrientationsHandler;
-(void)setOverrideSupportedInterfaceOrientationsHandler:(id)arg1 ;
-(BOOL)supportsStandardInterfaceOrientations;
-(void)setSupportsStandardInterfaceOrientations:(BOOL)arg1 ;
@end

