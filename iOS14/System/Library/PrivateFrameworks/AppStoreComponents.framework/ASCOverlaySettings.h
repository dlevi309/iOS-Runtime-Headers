/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSNumber;

@interface ASCOverlaySettings : NSObject

@property (nonatomic,copy) NSNumber * rateLimitRequestsPerSecond; 
@property (nonatomic,copy) NSNumber * rateLimitTimeWindow; 
@property (nonatomic,copy) NSNumber * overlaysLoadTimeout; 
+(id)sharedSettings;
-(id)_init;
-(NSNumber *)overlaysLoadTimeout;
-(void)setOverlaysLoadTimeout:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitRequestsPerSecond;
-(void)setRateLimitRequestsPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitTimeWindow;
-(void)setRateLimitTimeWindow:(NSNumber *)arg1 ;
@end

