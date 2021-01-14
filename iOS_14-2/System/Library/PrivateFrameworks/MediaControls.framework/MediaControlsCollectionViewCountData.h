/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(void)deleteItemAtIndex:(long long)arg1 ;
-(id)init;
-(long long)numberOfItems;
-(void)applyChanges;
-(void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)setHasPendingChanges:(BOOL)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)insertItemAtIndex:(long long)arg1 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(void)deleteItemsAtIndexes:(id)arg1 ;
-(void)reloadItemAtIndex:(long long)arg1 ;
-(NSIndexSet *)updatedIndexes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validateCountForNumberOfItems:(long long)arg1 ;
-(id)initWithNumberOfItems:(long long)arg1 ;
@end

