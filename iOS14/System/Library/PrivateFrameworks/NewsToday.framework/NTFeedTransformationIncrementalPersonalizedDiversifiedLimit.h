/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSArray, NSString;

@interface NTFeedTransformationIncrementalPersonalizedDiversifiedLimit : NSObject <FCFeedTransforming> {

	NSArray* _priorFeedItems;
	id<FCFeedTransforming> _privateLimitTransformation;

}

@property (nonatomic,copy) NSArray * priorFeedItems;                                         //@synthesize priorFeedItems=_priorFeedItems - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> privateLimitTransformation;              //@synthesize privateLimitTransformation=_privateLimitTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSArray *)priorFeedItems;
-(id<FCFeedTransforming>)privateLimitTransformation;
-(id)initWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3 ;
-(void)setPriorFeedItems:(NSArray *)arg1 ;
-(void)setPrivateLimitTransformation:(id<FCFeedTransforming>)arg1 ;
@end

