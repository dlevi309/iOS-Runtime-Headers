/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

