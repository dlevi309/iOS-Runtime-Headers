/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCPlayerCommandRequest;

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation {

	MPCPlayerCommandRequest* _request;
	unsigned long long _options;

}

@property (nonatomic,readonly) MPCPlayerCommandRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                     //@synthesize options=_options - In the implementation block
-(unsigned long long)options;
-(void)execute;
-(MPCPlayerCommandRequest *)request;
-(id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2 ;
@end

