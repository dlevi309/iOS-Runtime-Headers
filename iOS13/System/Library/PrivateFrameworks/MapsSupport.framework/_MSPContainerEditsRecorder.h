/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


#import <MapsSupport/MapsSupport-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface _MSPContainerEditsRecorder : NSObject {

	NSMutableArray* _originalMutableArray;
	NSMutableArray* _orderedEdits;
	NSMutableSet* _updatedObjects;

}

@property (nonatomic,readonly) NSMutableArray * recordableMutableArray; 
@property (nonatomic,readonly) NSArray * orderedEdits; 
-(id)initWithMutableArray:(id)arg1 ;
-(NSMutableArray *)recordableMutableArray;
-(void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)orderedEdits;
-(void)_mutableObjectContentDidUpdate:(id)arg1 ;
-(void)_editDetectorDidDetectUpdateForObject:(id)arg1 ;
-(unsigned long long)countOfEditableObjects;
-(id)objectInEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(id)editableObjectsAtIndexes:(id)arg1 ;
-(void)getEditableObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeEditableObjectsAtIndexes:(id)arg1 ;
-(void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2 ;
@end

