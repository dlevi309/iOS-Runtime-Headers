/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (nonatomic,copy) NSString * normalizedValue; 
@property (nonatomic,copy) NSString * typeIdentifier; 
@property (nonatomic,copy) NSString * uniformIdentifier; 
@property (nonatomic,retain) NSSet * antecedentOfRules; 
@property (nonatomic,retain) NSSet * consequentOfRules; 
+(id)fetchRequest;
@end

