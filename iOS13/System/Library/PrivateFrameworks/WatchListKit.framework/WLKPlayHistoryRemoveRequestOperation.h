/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKPlayHistoryRemoveRequestOperation : WLKUTSNetworkRequestOperation {

	WLKContinueWatchingResponse* _response;

}

@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(WLKContinueWatchingResponse *)response;
-(void)processResponse;
-(id)initWithChannelID:(id)arg1 externalID:(id)arg2 caller:(id)arg3 ;
@end

