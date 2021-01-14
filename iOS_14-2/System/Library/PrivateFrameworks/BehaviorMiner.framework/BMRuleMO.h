/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject

@property (assign,nonatomic) long long absoluteAntecedentSupport; 
@property (assign,nonatomic) long long absoluteConsequentSupport; 
@property (assign,nonatomic) long long absoluteSupport; 
@property (assign,nonatomic) double confidence; 
@property (assign,nonatomic) double support; 
@property (assign,nonatomic) long long uniqueDaysLastWeek; 
@property (assign,nonatomic) long long uniqueDaysTotal; 
@property (nonatomic,retain) NSSet * antecedent; 
@property (nonatomic,retain) NSSet * consequent; 
+(id)fetchRequest;
@end

