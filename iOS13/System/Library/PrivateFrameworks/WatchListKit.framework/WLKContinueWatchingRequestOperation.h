/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation {

	WLKContinueWatchingResponse* _response;

}

@property (nonatomic,retain) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(WLKContinueWatchingResponse *)response;
-(void)setResponse:(WLKContinueWatchingResponse *)arg1 ;
-(id)initWithQueryParameters:(id)arg1 ;
-(void)processResponse;
-(void)_donateMediaItems:(id)arg1 ;
-(id)initWithCaller:(id)arg1 options:(long long)arg2 ;
@end

