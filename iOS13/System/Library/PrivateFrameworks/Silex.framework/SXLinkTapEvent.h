/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSURL;

@interface SXLinkTapEvent : SXAnalyticsEvent {

	NSURL* _destinationURL;

}

@property (nonatomic,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
-(NSURL *)destinationURL;
-(id)initWithDestinationURL:(id)arg1 ;
@end

