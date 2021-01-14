/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/


@protocol ATXLocationManagerStateStore <NSObject>
@property (assign) double cacheExpirationInterval; 
@required
-(void)clear;
-(void)write:(id)arg1;
-(id)loadNowOrCallLater:(/*^block*/id)arg1;
-(void)setCacheExpirationInterval:(double)arg1;
-(double)cacheExpirationInterval;

@end

