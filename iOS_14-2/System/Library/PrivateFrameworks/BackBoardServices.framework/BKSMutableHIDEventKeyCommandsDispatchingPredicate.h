/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventKeyCommandsDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (nonatomic,copy) NSSet * senderDescriptors; 
@property (nonatomic,copy) NSSet * displays; 
+(id)new;
-(void)setSenderDescriptors:(NSSet *)arg1 ;
-(id)init;
-(void)setDisplays:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

