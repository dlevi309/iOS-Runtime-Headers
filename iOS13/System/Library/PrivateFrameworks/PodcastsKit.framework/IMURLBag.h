/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSBag;

@interface IMURLBag : NSObject <AMSBagProtocol> {

	BOOL expired;
	NSDate* expirationDate;
	NSString* profile;
	NSString* profileVersion;
	AMSBag* _bag;

}

@property (nonatomic,retain) AMSBag * bag;                                  //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
+(id)sharedInstance;
+(void)registerBagKeys:(id)arg1 ;
+(void)_registerBagKeysIfNeeded;
-(id)init;
-(id)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(BOOL)isExpired;
-(AMSBag *)bag;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)setBag:(AMSBag *)arg1 ;
-(id)trustedDomains;
-(id)metricsURL;
-(id)metricsDictionary;
-(id)mescalCertificateURL;
-(id)mescalSetupURL;
-(id)mescalSignedActions;
-(id)mescalSignSapRequests;
-(id)mescalSignSapResponses;
-(id)personalizedLookupURL;
-(id)unpersonalizedLookupURL;
@end

