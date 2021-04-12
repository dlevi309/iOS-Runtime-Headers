/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(unsigned long long)options;
-(MPCPlayerCommandRequest *)request;
-(id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2 ;
@end

