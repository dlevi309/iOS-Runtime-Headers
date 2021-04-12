/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, NSString;

@interface _GCMFiGamepadControllerProfile : GCGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)menuButton;
@end

