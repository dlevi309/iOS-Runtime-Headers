/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <UIKitCore/UIAlertView.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface GKLoginAlertView : UIAlertView <UITextFieldDelegate> {

	NSString* _username;
	unsigned long long _passwordFieldIndex;

}

@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(id)initWithDelegate:(id)arg1 uneditableUsername:(id)arg2 ;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_updateFrameForDisplay;
@end

