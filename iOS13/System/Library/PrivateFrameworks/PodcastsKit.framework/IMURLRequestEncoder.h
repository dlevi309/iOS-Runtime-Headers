/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@interface IMURLRequestEncoder : AMSURLRequestEncoder {

	BOOL _personalizeRequests;

}

@property (assign,nonatomic) BOOL personalizeRequests;              //@synthesize personalizeRequests=_personalizeRequests - In the implementation block
-(id)initWithBag:(id)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(BOOL)personalizeRequests;
-(void)prepareRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPersonalizeRequests:(BOOL)arg1 ;
@end

