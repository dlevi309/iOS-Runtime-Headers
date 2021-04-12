/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject {

	TSTLayout* mLayout;
	TSTLayoutSpace* mSpace;
	TSTLayoutSpace* mFrozenHeaderColumnsSpace;
	TSTLayoutSpace* mFrozenHeaderRowsSpace;
	TSTLayoutSpace* mFrozenHeaderCornerSpace;
	TSTLayoutSpace* mRepeatHeaderColumnsSpace;
	TSTLayoutSpace* mRepeatHeaderRowsSpace;
	TSTLayoutSpace* mRepeatHeaderCornerSpace;

}

@property (assign,nonatomic) TSTLayout * layout; 
@property (nonatomic,retain) TSTLayoutSpace * space; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * frozenHeaderCornerSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderColumnsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderRowsSpace; 
@property (nonatomic,retain) TSTLayoutSpace * repeatHeaderCornerSpace; 
-(void)dealloc;
-(id)description;
-(TSTLayout *)layout;
-(void)setLayout:(TSTLayout *)arg1 ;
-(TSTLayoutSpace *)space;
-(id)initWithLayout:(id)arg1 ;
-(void)performActionOnEachLayoutSpace:(/*^block*/id)arg1 ;
-(TSTLayoutSpace *)repeatHeaderRowsSpace;
-(TSTLayoutSpace *)repeatHeaderColumnsSpace;
-(void)invalidateCoordinates;
-(BOOL)performActionOnFrozenLayoutSpaces:(/*^block*/id)arg1 ;
-(BOOL)performActionOnRepeatLayoutSpaces:(/*^block*/id)arg1 ;
-(void)invalidateTableOffsets;
-(id)getSpaceContainingCellID:(SCD_Struct_TS140)arg1 ;
-(int)validateLayoutSpaces;
-(void)setSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)frozenHeaderColumnsSpace;
-(void)setFrozenHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)frozenHeaderRowsSpace;
-(void)setFrozenHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)frozenHeaderCornerSpace;
-(void)setFrozenHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderColumnsSpace:(TSTLayoutSpace *)arg1 ;
-(void)setRepeatHeaderRowsSpace:(TSTLayoutSpace *)arg1 ;
-(TSTLayoutSpace *)repeatHeaderCornerSpace;
-(void)setRepeatHeaderCornerSpace:(TSTLayoutSpace *)arg1 ;
@end

