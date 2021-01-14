/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/IMBaseStoreService.h>

@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService {

	NSData* _bodyData;
	NSURL* _endpointURL;

}

@property (nonatomic,retain) NSData * bodyData;                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
-(NSURL *)endpointURL;
-(id)urlRequest;
-(void)setBodyData:(NSData *)arg1 ;
-(NSData *)bodyData;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)generatedEndpointURLForBaseURL:(id)arg1 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2 ;
@end

