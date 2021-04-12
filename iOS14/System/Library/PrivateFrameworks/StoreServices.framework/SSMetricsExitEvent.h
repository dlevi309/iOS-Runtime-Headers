/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * exitType; 
@property (nonatomic,retain) NSString * exitURL; 
-(id)init;
-(NSString *)exitURL;
-(id)description;
-(void)setExitType:(NSString *)arg1 ;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
-(NSString *)exitType;
@end

