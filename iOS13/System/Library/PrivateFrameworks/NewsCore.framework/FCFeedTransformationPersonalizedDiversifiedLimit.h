/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
-(id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2 ;
@end

