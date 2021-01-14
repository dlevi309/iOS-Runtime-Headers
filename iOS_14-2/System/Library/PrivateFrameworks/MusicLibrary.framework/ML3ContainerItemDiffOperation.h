/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@class NSArray, ML3DatabaseConnection;

@interface ML3ContainerItemDiffOperation : NSOperation {

	long long _containerPersistentID;
	NSArray* _updatedItemsPersistentIDs;
	ML3DatabaseConnection* _connection;
	NSArray* _containerItemsToUpdate;
	NSArray* _containerItemsToDelete;

}

@property (nonatomic,retain) NSArray * containerItemsToUpdate;              //@synthesize containerItemsToUpdate=_containerItemsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * containerItemsToDelete;              //@synthesize containerItemsToDelete=_containerItemsToDelete - In the implementation block
-(void)main;
-(id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3 ;
-(NSArray *)containerItemsToDelete;
-(NSArray *)containerItemsToUpdate;
-(void)setContainerItemsToUpdate:(NSArray *)arg1 ;
-(void)setContainerItemsToDelete:(NSArray *)arg1 ;
@end

