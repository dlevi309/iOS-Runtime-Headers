/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest {

	BOOL _allowAuthentication;
	WLKContinueWatchingResponse* _response;

}

@property (assign,nonatomic) BOOL allowAuthentication;                              //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(id)init;
-(WLKContinueWatchingResponse *)response;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)allowAuthentication;
-(void)setAllowAuthentication:(BOOL)arg1 ;
@end

