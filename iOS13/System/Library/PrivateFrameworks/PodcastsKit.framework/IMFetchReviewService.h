/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSString;

@interface IMFetchReviewService : IMBaseStoreService {

	NSString* _adamID;

}

@property (nonatomic,retain) NSString * adamID;              //@synthesize adamID=_adamID - In the implementation block
-(id)urlRequest;
-(NSString *)adamID;
-(void)setAdamID:(NSString *)arg1 ;
-(id)initWithAdamID:(id)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
@end

