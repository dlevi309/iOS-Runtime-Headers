/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * response;              //@synthesize response=_response - In the implementation block
+(id)_requestURL:(id*)arg1 ;
-(id)init;
-(NSDictionary *)response;
-(void)processResponse;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
@end

