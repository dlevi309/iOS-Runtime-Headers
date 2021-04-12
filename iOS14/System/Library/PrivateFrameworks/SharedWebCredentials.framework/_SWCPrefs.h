/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/


@interface _SWCPrefs : NSObject

@property (readonly) unsigned long long maximumRetryCount; 
@property (readonly) double retryIntervalAfterFailure; 
@property (readonly) double retryIntervalAfterSuccess; 
@property (readonly) BOOL verifyExtendedValidation; 
@property (getter=isAppleInternal,readonly) BOOL appleInternal; 
+(id)sharedPrefs;
-(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)isAppleInternal;
-(id)_init;
-(unsigned long long)maximumRetryCount;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
-(unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4 ;
-(double)retryIntervalAfterSuccess;
-(double)retryIntervalAfterFailure;
-(double)retryIntervalAfterSuccess:(BOOL)arg1 ;
-(BOOL)verifyExtendedValidation;
-(id)descriptionOfAllPrefs;
-(unsigned long long)_recheckFuzzForSuccess:(BOOL)arg1 ;
-(id)_stringForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 ;
@end

