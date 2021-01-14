/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionFetchDescriptor.h>

@class NTCatchUpOperationTagRequest, NTCatchUpOperationForYouRequest, NSString;

@interface NTTagSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {

	NTCatchUpOperationTagRequest* _tagRequest;
	NTCatchUpOperationForYouRequest* _forYouRequest;

}

@property (nonatomic,copy) NTCatchUpOperationTagRequest * tagRequest;                    //@synthesize tagRequest=_tagRequest - In the implementation block
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
-(id)initWithTagConfiguration:(id)arg1 appConfiguration:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4 ;
-(NTCatchUpOperationTagRequest *)tagRequest;
-(void)setTagRequest:(NTCatchUpOperationTagRequest *)arg1 ;
@end

