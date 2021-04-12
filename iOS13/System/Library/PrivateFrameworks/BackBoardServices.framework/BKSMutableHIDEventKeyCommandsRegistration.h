/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventKeyCommandsRegistration.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet;

@interface BKSMutableHIDEventKeyCommandsRegistration : BKSHIDEventKeyCommandsRegistration

@property (nonatomic,copy) BKSHIDEventDeferringEnvironment * deferringEnvironment; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * deferringToken; 
@property (nonatomic,copy) NSSet * keyCommands; 
+(id)new;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeferringEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setDeferringToken:(BKSHIDEventDeferringToken *)arg1 ;
-(void)setKeyCommands:(NSSet *)arg1 ;
@end

