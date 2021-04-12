/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation {

	NSDictionary* _query;
	WLKSiriSearchResponse* _response;

}

@property (nonatomic,copy,readonly) NSDictionary * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) WLKSiriSearchResponse * response;              //@synthesize response=_response - In the implementation block
-(NSDictionary *)query;
-(WLKSiriSearchResponse *)response;
-(void)processResponse;
-(id)initWithQuery:(id)arg1 caller:(id)arg2 ;
@end

