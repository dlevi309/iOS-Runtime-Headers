/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDictionary, NSUUID;

@interface RTEntityDeletionRequestMO : RTCloudManagedObject

@property (nonatomic,retain) NSDictionary * recordIDs; 
@property (nonatomic,copy) NSUUID * targetDeviceIdentifier; 
+(id)fetchRequest;
+(id)managedObjectWithCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(void)mergeEntriesFromDictionary:(id)arg1 intoDictionary:(id)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(id)identifiersByTypeInSubgraphOfEntity:(id)arg1 shouldTombstone:(BOOL)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObject:(id)arg1 context:(id)arg2 ;
@end

