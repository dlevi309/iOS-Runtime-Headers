/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, ACAccount, NSString;

@interface AMSUIWebVerifyCredentialsAction : NSObject <AMSUIWebActionRunnable> {

	BOOL _ephemeral;
	BOOL _usernameEditable;
	AMSUIWebClientContext* _context;
	ACAccount* _account;
	NSString* _buttonText;
	long long _serviceType;
	NSString* _serviceIdentifier;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                        //@synthesize buttonText=_buttonText - In the implementation block
@property (assign,nonatomic) BOOL ephemeral;                               //@synthesize ephemeral=_ephemeral - In the implementation block
@property (assign,nonatomic) long long serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                 //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL usernameEditable;                        //@synthesize usernameEditable=_usernameEditable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_serviceTypeFromType:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSString *)buttonText;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(NSString *)serviceIdentifier;
-(BOOL)usernameEditable;
-(void)setUsernameEditable:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)serviceType;
-(BOOL)ephemeral;
-(NSString *)title;
-(void)setEphemeral:(BOOL)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

