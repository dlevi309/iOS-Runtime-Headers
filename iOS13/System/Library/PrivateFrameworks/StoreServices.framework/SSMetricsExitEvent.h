/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * exitType; 
@property (nonatomic,retain) NSString * exitURL; 
-(id)init;
-(id)description;
-(NSString *)exitType;
-(void)setExitType:(NSString *)arg1 ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
@end

