/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/


@interface _SWCPrefs : NSObject

@property (readonly) unsigned long long maximumRetryCount; 
@property (readonly) double retryIntervalAfterFailure; 
@property (readonly) double retryIntervalAfterSuccess; 
@property (readonly) BOOL verifyExtendedValidation; 
@property (getter=isAppleInternal,readonly) BOOL appleInternal; 
+(id)sharedPrefs;
-(id)_init;
-(BOOL)isAppleInternal;
-(unsigned long long)maximumRetryCount;
-(double)retryIntervalAfterFailure;
-(double)retryIntervalAfterSuccess;
-(double)retryIntervalAfterSuccess:(BOOL)arg1 ;
-(BOOL)verifyExtendedValidation;
-(id)descriptionOfAllPrefs;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
-(unsigned long long)_recheckFuzzForSuccess:(BOOL)arg1 ;
-(id)_stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 ;
@end

