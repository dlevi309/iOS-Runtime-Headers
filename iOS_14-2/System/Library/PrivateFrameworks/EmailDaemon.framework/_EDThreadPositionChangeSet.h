/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet;

@interface _EDThreadPositionChangeSet : NSObject <NSCopying> {

	NSMutableDictionary* _objectIDsToAddByBeforeObjectID;
	NSMutableDictionary* _objectIDsToMoveByBeforeObjectID;
	NSMutableSet* _objectIDsToDelete;

}

@property (nonatomic,retain) NSMutableDictionary * objectIDsToAddByBeforeObjectID;               //@synthesize objectIDsToAddByBeforeObjectID=_objectIDsToAddByBeforeObjectID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * objectIDsToMoveByBeforeObjectID;              //@synthesize objectIDsToMoveByBeforeObjectID=_objectIDsToMoveByBeforeObjectID - In the implementation block
@property (nonatomic,retain) NSMutableSet * objectIDsToDelete;                                   //@synthesize objectIDsToDelete=_objectIDsToDelete - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAddingObjectID:(id)arg1 ;
-(BOOL)isDeletingObjectID:(id)arg1 ;
-(NSMutableDictionary *)objectIDsToAddByBeforeObjectID;
-(NSMutableDictionary *)objectIDsToMoveByBeforeObjectID;
-(NSMutableSet *)objectIDsToDelete;
-(BOOL)addObjectIDToAdd:(id)arg1 before:(id)arg2 ;
-(BOOL)addObjectIDToMove:(id)arg1 before:(id)arg2 ;
-(void)addObjectIDToDelete:(id)arg1 ;
-(BOOL)_isMovingObjectID:(id)arg1 ;
-(void)setObjectIDsToAddByBeforeObjectID:(NSMutableDictionary *)arg1 ;
-(void)setObjectIDsToMoveByBeforeObjectID:(NSMutableDictionary *)arg1 ;
-(void)setObjectIDsToDelete:(NSMutableSet *)arg1 ;
@end

