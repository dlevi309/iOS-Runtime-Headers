/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BKSHIDEventSenderDescriptor.h>

@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (assign,nonatomic) long long hardwareType; 
@property (nonatomic,copy) BKSHIDEventDisplay * associatedDisplay; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,nonatomic) unsigned long long senderID; 
+(id)new;
-(id)init;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setHardwareType:(long long)arg1 ;
-(void)setAssociatedDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setPrimaryPage:(unsigned)arg1 primaryUsage:(unsigned)arg2 ;
@end

