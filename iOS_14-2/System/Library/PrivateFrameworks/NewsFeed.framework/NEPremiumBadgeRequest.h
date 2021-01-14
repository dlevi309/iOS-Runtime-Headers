/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed
*/


#import <NewsFeed/NewsFeed-Structs.h>
@class TUShineImageRequest, NEPremiumBadgeMask;

@interface NEPremiumBadgeRequest : NSObject {

	 style;
	 shineImageRequest;
	 mask;

}

@property (readonly,nonatomic) long long style; 
@property (readonly,nonatomic) TUShineImageRequest * shineImageRequest; 
@property (readonly,nonatomic) NEPremiumBadgeMask * mask; 
-(NEPremiumBadgeMask *)mask;
-(id)init;
-(long long)style;
-(TUShineImageRequest *)shineImageRequest;
-(id)initWithStyle:(long long)arg1 color:(id)arg2 bounds:(CGRect)arg3 mask:(id)arg4 traitCollection:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 color:(id)arg2 bounds:(CGRect)arg3 mask:(id)arg4 offset:(CGPoint)arg5 traitCollection:(id)arg6 ;
@end

