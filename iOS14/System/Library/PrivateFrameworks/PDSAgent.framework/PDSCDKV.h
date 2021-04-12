/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSData;

@interface PDSCDKV : NSManagedObject

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSNumber * numValue; 
@property (nonatomic,retain) NSData * dataValue; 
+(id)fetchRequest;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
+(id)predicateForKey:(id)arg1 ;
@end

