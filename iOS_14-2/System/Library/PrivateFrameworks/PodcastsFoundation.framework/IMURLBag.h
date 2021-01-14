/*
* Generated on Thursday, January 14, 2021 at 2:26:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSProcessInfo, AMSBag;

@interface IMURLBag : NSObject <AMSBagProtocol> {

	AMSBag* _bag;

}

@property (nonatomic,retain) AMSBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)registerBagKeys:(id)arg1 ;
+(void)_registerBagKeysIfNeeded;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)trustedDomains;
-(id)URLForKey:(id)arg1 ;
-(id)mescalSignSapRequests;
-(id)mescalSignSapResponses;
-(id)doubleForKey:(id)arg1 ;
-(id)metricsDictionary;
-(AMSBag *)bag;
-(id)personalizedLookupURL;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(id)metricsURL;
-(BOOL)isExpired;
-(void)setBag:(AMSBag *)arg1 ;
-(id)mescalSignedActions;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)unpersonalizedLookupURL;
-(id)mescalSetupURL;
-(id)integerForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)mescalCertificateURL;
-(id)stringForKey:(id)arg1 ;
-(NSString *)profileVersion;
-(id)reportAConcernURL;
-(void)reportAConcernURLWithCompletion:(/*^block*/id)arg1 ;
-(id)podcastsMediaAPIHostUrl;
-(id)mediaTaskCountryCode;
-(id)tokenServiceUrl;
@end

