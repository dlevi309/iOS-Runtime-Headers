/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@interface IMURLProtocolHandler : AMSURLProtocolHandler {

	BOOL _followsRedirects;

}

@property (assign) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(void)setFollowsRedirects:(BOOL)arg1 ;
-(BOOL)followsRedirects;
@end

