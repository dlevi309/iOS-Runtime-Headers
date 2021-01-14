/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class NSError;

@interface CDPStateHandlerResult : NSObject {

	BOOL _cloudDataProtectionEnabled;
	BOOL _shouldCompleteSignIn;
	unsigned long long _peeriCloudKeychainState;
	NSError* _error;

}

@property (assign) BOOL cloudDataProtectionEnabled;                         //@synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled - In the implementation block
@property (assign) BOOL shouldCompleteSignIn;                               //@synthesize shouldCompleteSignIn=_shouldCompleteSignIn - In the implementation block
@property (assign) unsigned long long peeriCloudKeychainState;              //@synthesize peeriCloudKeychainState=_peeriCloudKeychainState - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 error:(id)arg3 ;
+(id)successResult;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 peeriCloudKeychainState:(unsigned long long)arg3 error:(id)arg4 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)shouldCompleteSignIn;
-(BOOL)cloudDataProtectionEnabled;
-(unsigned long long)peeriCloudKeychainState;
-(void)setCloudDataProtectionEnabled:(BOOL)arg1 ;
-(void)setShouldCompleteSignIn:(BOOL)arg1 ;
-(void)setPeeriCloudKeychainState:(unsigned long long)arg1 ;
@end

