/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCPaidAccessCheckerType;
@class NSSet, NSString, FCBundleSubscription;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {

	long long _filterOptions;
	NSSet* _otherArticleIDs;
	NSSet* _otherClusterIDs;
	NSSet* _mutedTagIDs;
	NSSet* _subscribedTagIDs;
	NSString* _briefingsTagID;
	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCBundleSubscription* _bundleSubscription;

}

@property (assign,nonatomic) long long filterOptions;                                    //@synthesize filterOptions=_filterOptions - In the implementation block
@property (nonatomic,copy) NSSet * otherArticleIDs;                                      //@synthesize otherArticleIDs=_otherArticleIDs - In the implementation block
@property (nonatomic,copy) NSSet * otherClusterIDs;                                      //@synthesize otherClusterIDs=_otherClusterIDs - In the implementation block
@property (nonatomic,copy) NSSet * mutedTagIDs;                                          //@synthesize mutedTagIDs=_mutedTagIDs - In the implementation block
@property (nonatomic,copy) NSSet * subscribedTagIDs;                                     //@synthesize subscribedTagIDs=_subscribedTagIDs - In the implementation block
@property (nonatomic,copy) NSString * briefingsTagID;                                    //@synthesize briefingsTagID=_briefingsTagID - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;              //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,retain) FCBundleSubscription * bundleSubscription;                  //@synthesize bundleSubscription=_bundleSubscription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedTagIDs:(id)arg5 briefingsTagID:(id)arg6 paidAccessChecker:(id)arg7 bundleSubscription:(id)arg8 ;
+(id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4 ;
+(id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 ;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(NSSet *)mutedTagIDs;
-(void)setBundleSubscription:(FCBundleSubscription *)arg1 ;
-(NSSet *)subscribedTagIDs;
-(void)setSubscribedTagIDs:(NSSet *)arg1 ;
-(void)setFilterOptions:(long long)arg1 ;
-(void)setOtherClusterIDs:(NSSet *)arg1 ;
-(void)setBriefingsTagID:(NSString *)arg1 ;
-(long long)filterOptions;
-(NSSet *)otherClusterIDs;
-(FCBundleSubscription *)bundleSubscription;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(id)transformHeadline:(id)arg1 ;
-(NSSet *)otherArticleIDs;
-(void)setOtherArticleIDs:(NSSet *)arg1 ;
-(id)transformHeadlines:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(NSString *)briefingsTagID;
@end

