/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_matchSignedActions:(id)arg1 withURL:(id)arg2 error:(id*)arg3 ;
+(id)bagKeySet;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(id)_signedActionDataFromRequest:(id)arg1 policy:(id)arg2 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4 error:(id*)arg5 ;
+(id)bagSubProfile;
+(id)signatureFromData:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(id)_DAAPActionsForURLBagActions:(id)arg1 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bag:(id)arg4 error:(id*)arg5 ;
+(id)signatureUsingRequest:(id)arg1 type:(long long)arg2 bagContract:(id)arg3 error:(id*)arg4 ;
+(BOOL)shouldReprimeConnectionWithResult:(id)arg1 ;
+(BOOL)primeTheConnectionWithContract:(id)arg1 error:(id*)arg2 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(BOOL)_matchSignSapURL:(id)arg1 bagDictionary:(id)arg2 error:(id*)arg3 ;
+(BOOL)primeTheConnectionWithContract:(id)arg1 logKey:(id)arg2 error:(id*)arg3 ;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5 error:(id*)arg6 ;
+(id)bagSubProfileVersion;
+(BOOL)verifyTask:(id)arg1 data:(id)arg2 type:(long long)arg3 bagContract:(id)arg4 error:(id*)arg5 ;
+(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
+(id)createBagForSubProfile;
@end

