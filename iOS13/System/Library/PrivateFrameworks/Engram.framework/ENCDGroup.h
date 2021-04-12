/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/

#import <CoreData/NSManagedObject.h>

@class ENGroupID, ENStableGroupID, NSData;

@interface ENCDGroup : NSManagedObject

@property (nonatomic,retain) id<ENCypher> cypher; 
@property (nonatomic,retain) ENGroupID * groupID; 
@property (nonatomic,retain) ENStableGroupID * stableGroupID; 
@property (assign,nonatomic) long long groupIDGeneration; 
@property (nonatomic,retain) NSData * sharedApplicationData; 
+(id)fetchRequest;
+(id)groupFromGroup:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
+(id)predicateForGroupID:(id)arg1 ;
+(id)predicateForStableGroupID:(id)arg1 ;
+(id)insertIntoManagedObjectContext:(id)arg1 ;
+(id)predicateForGroupIDs:(id)arg1 ;
@end

