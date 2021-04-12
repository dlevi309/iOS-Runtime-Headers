/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexSet, NSOrderedSet, NSSet;

@interface WFChangeset : NSObject <NSCopying> {

	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSOrderedSet* _insertedObjects;
	NSSet* _movedIndexes;

}

@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes;                 //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes;                //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * insertedObjects;              //@synthesize insertedObjects=_insertedObjects - In the implementation block
@property (nonatomic,copy,readonly) NSSet * movedIndexes;                        //@synthesize movedIndexes=_movedIndexes - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(id)changesetFromStart:(id)arg1 toEnd:(id)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSOrderedSet *)insertedObjects;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(NSSet *)movedIndexes;
-(id)endResultByApplyingToStart:(id)arg1 ;
-(id)changesetByMergingChangeset:(id)arg1 ;
-(id)initWithDeletedIndexes:(id)arg1 insertedIndexes:(id)arg2 insertedObjects:(id)arg3 movedIndexes:(id)arg4 ;
@end

