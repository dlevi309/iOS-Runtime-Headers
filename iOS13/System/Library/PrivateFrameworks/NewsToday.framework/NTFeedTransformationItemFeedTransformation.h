/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSString;

@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming> {

	id<FCFeedTransforming> _feedItemTransformation;

}

@property (nonatomic,retain) id<FCFeedTransforming> feedItemTransformation;              //@synthesize feedItemTransformation=_feedItemTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(id)initWithFeedItemTransformation:(id)arg1 ;
-(id<FCFeedTransforming>)feedItemTransformation;
-(void)setFeedItemTransformation:(id<FCFeedTransforming>)arg1 ;
@end

