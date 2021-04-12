/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSubscriptionDataRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * response;              //@synthesize response=_response - In the implementation block
+(id)_requestURL:(id*)arg1 ;
-(id)init;
-(NSDictionary *)response;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
@end

