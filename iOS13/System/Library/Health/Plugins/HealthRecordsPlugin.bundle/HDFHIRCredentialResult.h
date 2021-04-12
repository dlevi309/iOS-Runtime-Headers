/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDFHIRAuthResponse, NSError, _HDWrappedFHIRCredential, HDFHIRCredential;

@interface HDFHIRCredentialResult : NSObject {

	HDFHIRAuthResponse* _authResponse;
	NSError* _refreshError;
	_HDWrappedFHIRCredential* _wrappedCredential;

}

@property (nonatomic,readonly) _HDWrappedFHIRCredential * wrappedCredential;              //@synthesize wrappedCredential=_wrappedCredential - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRCredential * credential; 
@property (nonatomic,copy,readonly) HDFHIRAuthResponse * authResponse;                    //@synthesize authResponse=_authResponse - In the implementation block
@property (nonatomic,copy,readonly) NSError * refreshError;                               //@synthesize refreshError=_refreshError - In the implementation block
@property (readonly) BOOL shouldRefresh; 
-(void)invalidate;
-(HDFHIRCredential *)credential;
-(HDFHIRAuthResponse *)authResponse;
-(NSError *)refreshError;
-(id)_initWithCredential:(id)arg1 authResponse:(id)arg2 ;
-(BOOL)shouldRefresh;
-(id)_resultWithAuthResponse:(id)arg1 ;
-(id)_resultWithRefreshError:(id)arg1 ;
-(id)_initWithWrappedCredential:(id)arg1 authResponse:(id)arg2 refreshError:(id)arg3 ;
-(void)didRefreshCredential:(id)arg1 ;
-(_HDWrappedFHIRCredential *)wrappedCredential;
@end

