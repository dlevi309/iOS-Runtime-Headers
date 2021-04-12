/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
+(BOOL)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3 ;
+(id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3 ;
+(id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2 ;
+(id)_DAAPActionsForURLBagActions:(id)arg1 ;
+(BOOL)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id*)arg3 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id*)arg5 ;
+(BOOL)shouldReprimeConnectionWithResult:(id)arg1 ;
+(BOOL)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5 ;
@end

