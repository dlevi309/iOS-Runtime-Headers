/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@interface IMURLProtocolHandler : AMSURLProtocolHandler {

	BOOL _followsRedirects;

}

@property (assign) BOOL followsRedirects;              //@synthesize followsRedirects=_followsRedirects - In the implementation block
-(BOOL)followsRedirects;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3 ;
-(void)setFollowsRedirects:(BOOL)arg1 ;
@end

