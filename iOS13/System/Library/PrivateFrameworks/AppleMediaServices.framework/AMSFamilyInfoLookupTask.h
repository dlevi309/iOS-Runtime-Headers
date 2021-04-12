/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_processURLResult:(id)arg1 ;
-(ACAccount *)account;
-(id)initWithBag:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 bag:(id)arg2 ;
-(id)initWithBagContract:(id)arg1 ;
-(id)_performFamilyInfoRequestForAccount:(id)arg1 error:(id*)arg2 ;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg1 ;
-(void)_cacheFamilyInfoLookupResult:(id)arg1 forAccount:(id)arg2 ;
-(id)_pathForCachedFamilyInfoLookupResult;
-(id)_currentCachedFamilyInfo;
-(id)performFamilyInfoLookup;
@end

