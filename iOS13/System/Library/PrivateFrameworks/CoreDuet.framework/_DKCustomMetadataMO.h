/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, NSNumber, NSDate, NSData;

@interface _DKCustomMetadataMO : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSSet * event; 
@property (nonatomic,copy) NSNumber * doubleValue; 
@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,copy) NSString * valueHash; 
+(id)fetchRequest;
@end

