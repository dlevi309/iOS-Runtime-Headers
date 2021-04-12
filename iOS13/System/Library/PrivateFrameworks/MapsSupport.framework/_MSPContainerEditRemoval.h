/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditRemoval.h>

@class NSArray, NSIndexSet, NSString;

@interface _MSPContainerEditRemoval : _MSPContainerEdit <MSPContainerEditRemoval> {

	NSArray* _originalObjects;
	NSArray* _removedImmutableObjects;
	NSIndexSet* _indexesOfRemovedObjects;

}

@property (nonatomic,readonly) NSArray * originalObjects;                         //@synthesize originalObjects=_originalObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * removedImmutableObjects;                 //@synthesize removedImmutableObjects=_removedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfRemovedObjects;              //@synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects - In the implementation block
-(NSString *)description;
-(NSArray *)removedImmutableObjects;
-(id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2 ;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(NSIndexSet *)indexesOfRemovedObjects;
-(NSArray *)originalObjects;
@end

