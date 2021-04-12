/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(id)init;
-(NSOrderedSet *)insertedObjects;
-(id)description;
-(NSSet *)movedIndexes;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)endResultByApplyingToStart:(id)arg1 ;
-(id)changesetByMergingChangeset:(id)arg1 ;
-(id)initWithDeletedIndexes:(id)arg1 insertedIndexes:(id)arg2 insertedObjects:(id)arg3 movedIndexes:(id)arg4 ;
@end

