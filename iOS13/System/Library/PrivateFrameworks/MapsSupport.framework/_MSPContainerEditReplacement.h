/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditReplacement.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditReplacement : _MSPContainerEdit <MSPContainerEditReplacement> {

	NSArray* _originalObjects;
	NSArray* _originalImmutableObjects;
	NSArray* _replacementObjects;
	NSArray* _replacementImmutableObjects;
	NSIndexSet* _indexesOfReplacedObjects;

}

@property (nonatomic,readonly) NSArray * originalObjects;                          //@synthesize originalObjects=_originalObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacementObjects;                       //@synthesize replacementObjects=_replacementObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * originalImmutableObjects;                 //@synthesize originalImmutableObjects=_originalImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSArray * replacementImmutableObjects;              //@synthesize replacementImmutableObjects=_replacementImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfReplacedObjects;              //@synthesize indexesOfReplacedObjects=_indexesOfReplacedObjects - In the implementation block
-(NSString *)description;
-(NSArray *)originalImmutableObjects;
-(NSArray *)replacementImmutableObjects;
-(id)initWithOriginalObjects:(id)arg1 replacementObjects:(id)arg2 indexes:(id)arg3 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSArray *)originalObjects;
-(NSIndexSet *)indexesOfReplacedObjects;
-(NSArray *)replacementObjects;
@end

