/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming> {

	id<FCFeedTransforming> _innerFilter;

}

@property (nonatomic,retain) id<FCFeedTransforming> innerFilter;              //@synthesize innerFilter=_innerFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(/*^block*/id)arg5 dateOfArticleIDConsumptionProvider:(/*^block*/id)arg6 maxVersionConsumedProvider:(/*^block*/id)arg7 dateOfMaxVersionConsumptionProvider:(/*^block*/id)arg8 ;
-(id)init;
-(id<FCFeedTransforming>)innerFilter;
-(void)setInnerFilter:(id<FCFeedTransforming>)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

