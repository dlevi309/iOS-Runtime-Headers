/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

