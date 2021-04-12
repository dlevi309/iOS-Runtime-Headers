/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXMagazineGrid : NSObject {

	unsigned long long _numberOfColumns;
	long long* _table;
	unsigned long long _tableSizeInBytes;
	long long _maxRows;

}

@property (nonatomic,readonly) unsigned long long currentRowsUsed; 
@property (nonatomic,readonly) unsigned long long endingType; 
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)clearArea:(PXMagazineRect)arg1 ;
-(unsigned long long)endingType;
-(void)resetWithSize:(unsigned long long)arg1 ;
-(id)initWithNumberOfColumns:(long long)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)currentRowsUsed;
-(void)enlargeTable;
-(void)setTileIdentifier:(unsigned long long)arg1 forArea:(PXMagazineRect)arg2 ;
-(BOOL)nextEmptyTileX:(long long*)arg1 Y:(long long*)arg2 maxWidth:(long long*)arg3 ;
-(BOOL)isPerfectEnding;
-(BOOL)isGoodEnding;
-(BOOL)_hasAnyTilesUsedInArea:(PXMagazineRect)arg1 ;
-(long long)_numberOfEmptyTilesInArea:(PXMagazineRect)arg1 ;
-(BOOL)_hasAnyEmptyTilesInArea:(PXMagazineRect)arg1 ;
-(long long)_numberOfEmptyTilesAtTheEnd;
-(BOOL)_isEmptyGrid;
-(unsigned long long)_rowsUsed;
-(void)dealloc;
@end

