/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

