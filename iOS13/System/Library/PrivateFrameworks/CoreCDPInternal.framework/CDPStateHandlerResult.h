/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)shouldCompleteSignIn;
-(BOOL)cloudDataProtectionEnabled;
-(unsigned long long)peeriCloudKeychainState;
-(void)setCloudDataProtectionEnabled:(BOOL)arg1 ;
-(void)setShouldCompleteSignIn:(BOOL)arg1 ;
-(void)setPeeriCloudKeychainState:(unsigned long long)arg1 ;
@end

