/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@interface IMURLRequestEncoder : AMSURLRequestEncoder {

	BOOL _personalizeRequests;

}

@property (assign,nonatomic) BOOL personalizeRequests;              //@synthesize personalizeRequests=_personalizeRequests - In the implementation block
-(void)setPersonalizeRequests:(BOOL)arg1 ;
-(id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 ;
-(id)initWithBag:(id)arg1 ;
-(BOOL)personalizeRequests;
-(void)prepareRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

