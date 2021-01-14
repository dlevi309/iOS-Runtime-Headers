/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsEnterEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * enterType; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
-(NSString *)referringAppName;
-(id)init;
-(void)setReferringAppName:(NSString *)arg1 ;
-(NSString *)referringURL;
-(id)description;
-(void)setEnterType:(NSString *)arg1 ;
-(void)setEnterTypeWithLaunchReason:(long long)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(NSString *)enterType;
@end

