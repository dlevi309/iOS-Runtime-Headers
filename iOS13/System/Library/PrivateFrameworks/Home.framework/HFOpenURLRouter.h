/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFApplicationURLHandling;
@interface HFOpenURLRouter : NSObject {

	id<HFApplicationURLHandling> _applicationURLHandler;

}

@property (assign,nonatomic,__weak) id<HFApplicationURLHandling> applicationURLHandler;              //@synthesize applicationURLHandler=_applicationURLHandler - In the implementation block
+(id)sharedInstance;
-(id)openURL:(id)arg1 ;
-(id<HFApplicationURLHandling>)applicationURLHandler;
-(void)setApplicationURLHandler:(id<HFApplicationURLHandling>)arg1 ;
@end

