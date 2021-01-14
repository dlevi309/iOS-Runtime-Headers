/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDeferringPredicate.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDisplay, BKSHIDEventDeferringToken;

@interface BKSMutableHIDEventDeferringPredicate : BKSHIDEventDeferringPredicate

@property (nonatomic,retain) BKSHIDEventDeferringEnvironment * environment; 
@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * token; 
+(id)new;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(id)init;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

