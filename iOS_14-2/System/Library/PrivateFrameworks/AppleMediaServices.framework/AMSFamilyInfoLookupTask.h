/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSBagProtocol;
@class ACAccount, NSString;

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer> {

	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _logKey;

}

@property (nonatomic,readonly) ACAccount * account;                 //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) id<AMSBagProtocol> bag;              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSString * logKey;                     //@synthesize logKey=_logKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)_processURLResult:(id)arg1 ;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(ACAccount *)account;
-(id)initWithBagContract:(id)arg1 ;
-(id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ;
-(id)_pathForCachedFamilyInfoLookupResult;
-(void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2 ;
-(id)_currentCachedFamilyInfo;
-(id)performFamilyInfoLookup;
-(void)setLogKey:(NSString *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(NSString *)logKey;
@end

