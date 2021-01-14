/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyCommands:(NSSet *)arg1 ;
-(void)setDeferringEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setDeferringToken:(BKSHIDEventDeferringToken *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

