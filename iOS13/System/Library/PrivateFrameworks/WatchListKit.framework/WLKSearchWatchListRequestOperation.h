/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation {

	NSDictionary* _query;
	WLKSearchWatchListResponse* _response;

}

@property (nonatomic,copy,readonly) NSDictionary * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) WLKSearchWatchListResponse * response;              //@synthesize response=_response - In the implementation block
-(NSDictionary *)query;
-(WLKSearchWatchListResponse *)response;
-(void)processResponse;
-(id)initWithQuery:(id)arg1 caller:(id)arg2 ;
@end

