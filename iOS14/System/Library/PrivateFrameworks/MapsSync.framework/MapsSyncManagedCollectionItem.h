/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NSSet;

@interface MapsSyncManagedCollectionItem : NSManagedObject

@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (assign,nonatomic) long long positionIndex; 
@property (retain,nonatomic) NSSet * collections; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

