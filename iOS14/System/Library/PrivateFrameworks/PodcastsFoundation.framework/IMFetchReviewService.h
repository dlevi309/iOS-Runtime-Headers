/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSString;

@interface IMFetchReviewService : IMBaseStoreService {

	NSString* _adamID;

}

@property (nonatomic,retain) NSString * adamID;              //@synthesize adamID=_adamID - In the implementation block
-(id)urlRequest;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(id)initWithAdamID:(id)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
@end

