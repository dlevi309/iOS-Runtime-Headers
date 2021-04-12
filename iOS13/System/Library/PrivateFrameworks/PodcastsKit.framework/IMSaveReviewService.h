/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService {

	NSData* _bodyData;
	NSURL* _endpointURL;

}

@property (nonatomic,retain) NSData * bodyData;                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
-(NSURL *)endpointURL;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(id)urlRequest;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)generatedEndpointURLForBaseURL:(id)arg1 ;
-(id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2 ;
@end

