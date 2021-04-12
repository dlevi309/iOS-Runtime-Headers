/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTCatchUpOperationForYouRequest, NSString;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTCatchUpOperationForYouRequest* _forYouRequest;

}

@property (nonatomic,copy) NTCatchUpOperationForYouRequest * forYouRequest;              //@synthesize forYouRequest=_forYouRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTCatchUpOperationForYouRequest *)forYouRequest;
-(void)setForYouRequest:(NTCatchUpOperationForYouRequest *)arg1 ;
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)assembleResultsWithCatchUpOperation:(id)arg1 ;
-(id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(id)initWithForYouConfiguration:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9 ;
@end

