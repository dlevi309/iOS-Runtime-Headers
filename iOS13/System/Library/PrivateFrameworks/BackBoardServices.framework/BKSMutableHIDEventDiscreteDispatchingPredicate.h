/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDiscreteDispatchingPredicate.h>

@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (nonatomic,copy) NSSet * senderDescriptors; 
@property (nonatomic,copy) NSSet * descriptors; 
@property (nonatomic,copy) NSSet * displays; 
+(id)new;
+(id)defaultSystemPredicate;
+(id)defaultFocusPredicate;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDescriptors:(NSSet *)arg1 ;
-(void)setDisplays:(NSSet *)arg1 ;
-(void)setSenderDescriptors:(NSSet *)arg1 ;
@end

