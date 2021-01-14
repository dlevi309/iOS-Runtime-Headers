/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXArrayChangeDetails, PXDataSection, NSArray, NSIndexSet;

@interface PXSidebarItemChangeDetails : NSObject {

	BOOL _hasContentChanges;
	BOOL _needsReload;
	PXArrayChangeDetails* _arrayChangeDetails;
	PXDataSection* _previousDataSection;
	NSArray* _removedItems;
	NSArray* _changedItems;

}

@property (nonatomic,readonly) PXArrayChangeDetails * arrayChangeDetails;              //@synthesize arrayChangeDetails=_arrayChangeDetails - In the implementation block
@property (nonatomic,readonly) PXDataSection * previousDataSection;                    //@synthesize previousDataSection=_previousDataSection - In the implementation block
@property (nonatomic,readonly) NSArray * removedItems;                                 //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,readonly) NSArray * changedItems;                                 //@synthesize changedItems=_changedItems - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) BOOL hasContentChanges;                                 //@synthesize hasContentChanges=_hasContentChanges - In the implementation block
@property (nonatomic,readonly) BOOL needsReload;                                       //@synthesize needsReload=_needsReload - In the implementation block
+(void)makeArrayIndexMovesIncremental:(NSRange*)arg1 count:(unsigned long long)arg2 ;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)removedIndexes;
-(NSArray *)changedItems;
-(NSArray *)removedItems;
-(BOOL)needsReload;
-(id)description;
-(BOOL)hasMoves;
-(PXArrayChangeDetails *)arrayChangeDetails;
-(id)initWithArrayChangeDetails:(id)arg1 previousDataSection:(id)arg2 ;
-(PXDataSection *)previousDataSection;
-(BOOL)hasContentChanges;
-(void)enumerateMovedIndexesUsingBlock:(/*^block*/id)arg1 ;
-(id)changedIndexes;
@end

