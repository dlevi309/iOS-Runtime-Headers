/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AKBasicLoginActions : NSObject <NSCopying> {

	/*^block*/id _authenticateAction;
	/*^block*/id _ak_cancelAction;
	/*^block*/id _createIDAction;
	/*^block*/id _useIDAction;
	/*^block*/id _forgotIDAction;
	/*^block*/id _forgotPasswordAction;

}

@property (nonatomic,copy) id authenticateAction;                //@synthesize authenticateAction=_authenticateAction - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                   //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
@property (nonatomic,copy) id createIDAction;                    //@synthesize createIDAction=_createIDAction - In the implementation block
@property (nonatomic,copy) id useIDAction;                       //@synthesize useIDAction=_useIDAction - In the implementation block
@property (nonatomic,copy) id forgotIDAction;                    //@synthesize forgotIDAction=_forgotIDAction - In the implementation block
@property (nonatomic,copy) id forgotPasswordAction;              //@synthesize forgotPasswordAction=_forgotPasswordAction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)createIDAction;
-(void)setCreateIDAction:(id)arg1 ;
-(id)ak_cancelAction;
-(id)authenticateAction;
-(id)forgotPasswordAction;
-(void)setAuthenticateAction:(id)arg1 ;
-(void)setAk_cancelAction:(id)arg1 ;
-(id)useIDAction;
-(void)setUseIDAction:(id)arg1 ;
-(id)forgotIDAction;
-(void)setForgotIDAction:(id)arg1 ;
-(void)setForgotPasswordAction:(id)arg1 ;
@end

