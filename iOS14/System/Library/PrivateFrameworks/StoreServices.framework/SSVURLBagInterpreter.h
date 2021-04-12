/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, SSVSAPSignaturePolicy, NSURL, NSDictionary, NSString;

@interface SSVURLBagInterpreter : NSObject <NSCopying> {

	NSMutableDictionary* _cachedBagValues;
	NSArray* _subscriptionSignedActions;
	SSVSAPSignaturePolicy* _subscriptionSignaturePolicy;
	NSURL* _mescalPrimingURL;

}

@property (nonatomic,copy,readonly) NSArray * AMDDomains; 
@property (nonatomic,copy,readonly) NSURL * mescalCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * mescalSetupURL; 
@property (nonatomic,copy,readonly) NSURL * mescalPrimingURL;                          //@synthesize mescalPrimingURL=_mescalPrimingURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedActions; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedRequests; 
@property (nonatomic,copy,readonly) NSDictionary * mescalSignedResponses; 
@property (nonatomic,copy,readonly) NSURL * pastisCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * pastisKeyServerURL; 
@property (nonatomic,copy,readonly) NSString * storeFrontSuffix; 
-(id)mescalSignaturePolicyForResponseURL:(id)arg1 ;
-(id)mescalSignaturePolicyForRequestURL:(id)arg1 ;
-(id)cachedValueFromBag:(id)arg1 key:(id)arg2 withType:(unsigned long long)arg3 updateCache:(BOOL)arg4 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(id)initWithSSBag:(id)arg1 ;
-(NSDictionary *)mescalSignedRequests;
-(id)_valueForKey:(id)arg1 withClass:(Class)arg2 ;
-(NSArray *)AMDDomains;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(NSURL *)mescalPrimingURL;
-(NSDictionary *)mescalSignedActions;
-(NSURL *)mescalSetupURL;
-(NSDictionary *)mescalSignedResponses;
-(id)URLForURLBagKey:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(NSURL *)pastisCertificateURL;
-(id)valueForURLBagKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)mescalCertificateURL;
-(id)initWithURLBag:(id)arg1 ;
-(NSURL *)pastisKeyServerURL;
@end

