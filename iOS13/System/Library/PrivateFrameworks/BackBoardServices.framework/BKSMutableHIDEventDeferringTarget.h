/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPid:(int)arg1 ;
-(void)setToken:(BKSHIDEventDeferringToken *)arg1 ;
@end

