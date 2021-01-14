/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation {

	WLKContinueWatchingResponse* _response;

}

@property (nonatomic,retain) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(WLKContinueWatchingResponse *)response;
-(void)setResponse:(WLKContinueWatchingResponse *)arg1 ;
-(id)initWithQueryParameters:(id)arg1 options:(long long)arg2 ;
-(void)processResponse;
@end

