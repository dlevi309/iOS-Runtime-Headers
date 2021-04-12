/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSError, NSString, VSIdentityProvider;

@interface VSViewModel : NSObject {

	BOOL _preValidate;
	unsigned long long _viewState;
	unsigned long long _validationState;
	NSError* _error;
	NSString* _title;
	VSIdentityProvider* _identityProvider;

}

@property (assign,nonatomic) unsigned long long viewState;                           //@synthesize viewState=_viewState - In the implementation block
@property (assign,getter=shouldPreValidate,nonatomic) BOOL preValidate;              //@synthesize preValidate=_preValidate - In the implementation block
@property (assign,nonatomic) unsigned long long validationState;                     //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                  //@synthesize identityProvider=_identityProvider - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setViewState:(unsigned long long)arg1 ;
-(unsigned long long)validationState;
-(unsigned long long)viewState;
-(void)setValidationState:(unsigned long long)arg1 ;
-(NSString *)title;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(BOOL)shouldPreValidate;
-(void)setPreValidate:(BOOL)arg1 ;
@end

