/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)viewState;
-(void)setViewState:(unsigned long long)arg1 ;
-(unsigned long long)validationState;
-(void)setValidationState:(unsigned long long)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(BOOL)shouldPreValidate;
-(void)setPreValidate:(BOOL)arg1 ;
@end

