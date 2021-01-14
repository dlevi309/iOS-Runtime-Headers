/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIIdentifierDiffer.h>
@class NSIndexSet, NSSet, NSOrderedCollectionDifference;


@protocol _UIIdentifierDiffer <NSObject>
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) NSOrderedCollectionDifference * collectionDifference; 
@required
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(NSSet *)movePairs;
-(NSOrderedCollectionDifference *)collectionDifference;
-(BOOL)hasChanges;

@end


@class NSIndexSet, NSSet, NSOrderedCollectionDifference, NSOrderedSet, NSString;

@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {

	NSOrderedSet* _beforeIdentifiers;
	NSOrderedSet* _afterIdentifiers;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _deletedIndexes;
	NSSet* _movePairs;
	BOOL _identifiersAreUnique;
	NSOrderedCollectionDifference* _collectionDifference;

}

@property (nonatomic,readonly) NSOrderedSet * beforeIdentifiers; 
@property (nonatomic,readonly) NSOrderedSet * afterIdentifiers; 
@property (nonatomic,readonly) NSOrderedCollectionDifference * collectionDifference; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(NSSet *)movePairs;
-(void)_performFoundationDiffWithOptions:(long long)arg1 ;
-(NSOrderedSet *)afterIdentifiers;
-(NSOrderedSet *)beforeIdentifiers;
-(void)performDiffWithOptions:(long long)arg1 ;
-(NSString *)description;
-(NSOrderedCollectionDifference *)collectionDifference;
-(void)performDiff;
-(void)_prepareDiffResultsFromCollectionDifference:(id)arg1 ;
-(void)_performDiffWithOptions:(long long)arg1 ;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 collectionDifference:(id)arg3 ;
-(BOOL)hasChanges;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 ;
-(void)_performHeckelDiffWithOptions:(long long)arg1 ;
@end

