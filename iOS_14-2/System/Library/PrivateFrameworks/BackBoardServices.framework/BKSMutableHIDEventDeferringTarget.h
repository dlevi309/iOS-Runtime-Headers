/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDeferringTarget.h>

@class BKSHIDEventDeferringToken;

@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget

@property (assign,nonatomic) int pid; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * token; 
+(id)new;
-(id)init;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

