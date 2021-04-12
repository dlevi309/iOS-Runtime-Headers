/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

