/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDictionary, NSUUID;

@interface RTEntityDeletionRequestMO : RTCloudManagedObject

@property (nonatomic,retain) NSDictionary * recordIDs; 
@property (nonatomic,copy) NSUUID * targetDeviceIdentifier; 
+(id)fetchRequest;
+(id)managedObjectWithCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(id)identifiersByTypeInSubgraphOfEntity:(id)arg1 shouldTombstone:(BOOL)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObject:(id)arg1 context:(id)arg2 ;
-(void)mergeEntriesFromDictionary:(id)arg1 intoDictionary:(id)arg2 ;
@end

