/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MediaControlsCollectionViewCountData : NSObject <NSCopying> {

	NSMutableIndexSet* _insertedIndexes;
	NSMutableIndexSet* _deletedIndexes;
	NSMutableIndexSet* _updatedIndexes;
	BOOL _hasPendingChanges;
	long long _numberOfItems;

}

@property (assign,nonatomic) long long numberOfItems;                          //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) BOOL hasPendingChanges;                           //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * updatedIndexes; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfItems;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)insertItemAtIndex:(long long)arg1 ;
-(BOOL)hasPendingChanges;
-(NSIndexSet *)updatedIndexes;
-(void)applyChanges;
-(id)initWithNumberOfItems:(long long)arg1 ;
-(void)setHasPendingChanges:(BOOL)arg1 ;
-(void)deleteItemAtIndex:(long long)arg1 ;
-(void)reloadItemAtIndex:(long long)arg1 ;
-(void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)deleteItemsAtIndexes:(id)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(BOOL)validateCountForNumberOfItems:(long long)arg1 ;
@end

