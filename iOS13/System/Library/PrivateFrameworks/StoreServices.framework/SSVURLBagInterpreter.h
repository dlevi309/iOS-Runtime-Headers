/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)mescalCertificateURL;
-(NSURL *)mescalSetupURL;
-(NSURL *)mescalPrimingURL;
-(NSDictionary *)mescalSignedActions;
-(id)initWithURLBagDictionary:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(id)cachedValueFromBag:(id)arg1 key:(id)arg2 withType:(unsigned long long)arg3 updateCache:(BOOL)arg4 ;
-(id)_valueForKey:(id)arg1 withClass:(Class)arg2 ;
-(id)URLForURLBagKey:(id)arg1 ;
-(NSDictionary *)mescalSignedRequests;
-(NSDictionary *)mescalSignedResponses;
-(NSArray *)AMDDomains;
-(id)valueForURLBagKey:(id)arg1 ;
-(id)initWithURLBag:(id)arg1 ;
-(id)initWithSSBag:(id)arg1 ;
-(id)mescalSignaturePolicyForRequestURL:(id)arg1 ;
-(id)mescalSignaturePolicyForResponseURL:(id)arg1 ;
-(NSURL *)pastisCertificateURL;
-(NSURL *)pastisKeyServerURL;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
@end

