/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID;

@interface MapsSyncManagedCuratedCollection : NSManagedObject

@property (copy,nonatomic) NSDate * createTime; 
@property (assign,nonatomic) long long curatedCollectionIdentifier; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (assign,nonatomic) long long positionIndex; 
@property (assign,nonatomic) int resultProviderIdentifier; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

