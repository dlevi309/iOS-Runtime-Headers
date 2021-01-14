/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/

#import <UIKitCore/UIView.h>

@class AXUIAlertContext, NSDictionary;

@interface AXUIAlert : UIView {

	AXUIAlertContext* _context;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic,__weak) AXUIAlertContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
+(id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(AXUIAlertContext *)context;
-(void)setContext:(AXUIAlertContext *)arg1 ;
-(void)addToContainerView:(id)arg1 ;
@end

