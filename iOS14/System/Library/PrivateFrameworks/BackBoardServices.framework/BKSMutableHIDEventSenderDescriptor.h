/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAuthenticated:(BOOL)arg1 ;
-(id)init;
-(void)setHardwareType:(long long)arg1 ;
-(void)setPrimaryPage:(unsigned)arg1 primaryUsage:(unsigned)arg2 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)setAssociatedDisplay:(BKSHIDEventDisplay *)arg1 ;
@end

