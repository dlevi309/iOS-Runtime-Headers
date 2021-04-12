/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, _DKEventMO, NSSet, _DKSourceMO;

@interface _DKObjectMO : NSManagedObject

@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * localCreationDate; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSNumber * uuidHash; 
@property (nonatomic,retain) _DKEventMO * event; 
@property (nonatomic,retain) NSSet * relationObject; 
@property (nonatomic,retain) NSSet * relationSubject; 
@property (nonatomic,retain) _DKSourceMO * source; 
+(id)fetchRequest;
@end

