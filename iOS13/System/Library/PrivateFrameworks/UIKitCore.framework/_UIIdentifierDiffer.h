/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIIdentifierDiffer.h>
@class NSIndexSet, NSSet;


@protocol _UIIdentifierDiffer <NSObject>
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
@required
-(BOOL)hasChanges;
-(NSSet *)movePairs;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;

@end


@class NSIndexSet, NSSet, NSOrderedSet, NSString;

@interface _UIIdentifierDiffer : NSObject <_UIIdentifierDiffer> {

	NSOrderedSet* _beforeIdentifiers;
	NSOrderedSet* _afterIdentifiers;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _deletedIndexes;
	NSSet* _movePairs;
	BOOL _identifiersAreUnique;

}

@property (nonatomic,readonly) NSOrderedSet * beforeIdentifiers; 
@property (nonatomic,readonly) NSOrderedSet * afterIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSSet * movePairs; 
@property (nonatomic,readonly) BOOL hasChanges; 
-(NSString *)description;
-(BOOL)hasChanges;
-(id)initWithBeforeIdentifiers:(id)arg1 afterIdentifiers:(id)arg2 ;
-(void)performDiff;
-(NSSet *)movePairs;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(void)_performDiffWithOptions:(long long)arg1 ;
-(void)_performHeckelDiffWithOptions:(long long)arg1 ;
-(void)_performFoundationDiffWithOptions:(long long)arg1 ;
-(void)performDiffWithOptions:(long long)arg1 ;
-(NSOrderedSet *)beforeIdentifiers;
-(NSOrderedSet *)afterIdentifiers;
@end

