/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (assign,nonatomic) long long absoluteSupport; 
@property (nonatomic,copy) NSString * normalizedValue; 
@property (nonatomic,copy) NSString * typeIdentifier; 
@property (nonatomic,copy) NSString * uniformIdentifier; 
@property (nonatomic,retain) NSSet * antecedentOfRules; 
@property (nonatomic,retain) NSSet * consequentOfRules; 
+(id)fetchRequest;
@end

