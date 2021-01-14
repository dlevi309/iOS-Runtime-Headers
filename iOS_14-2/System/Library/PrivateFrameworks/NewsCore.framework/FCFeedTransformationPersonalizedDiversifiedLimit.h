/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCLimitAwareFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSString;

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming> {

	unsigned long long _limit;
	id<FCFeedPersonalizing> _feedPersonalizer;

}

@property (assign,nonatomic) unsigned long long limit;                              //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 ;
+(id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(unsigned long long)limit;
-(id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
@end

