/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject

@property (assign,nonatomic) double confidence; 
@property (assign,nonatomic) double support; 
@property (nonatomic,retain) NSSet * antecedent; 
@property (nonatomic,retain) NSSet * consequent; 
+(id)fetchRequest;
@end

