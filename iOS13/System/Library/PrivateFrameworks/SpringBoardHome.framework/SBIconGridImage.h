/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIImage.h>

@protocol SBIconListLayout;
@class CPMemoryPool;

@interface SBIconGridImage : UIImage {

	unsigned _treatedCells;
	id<SBIconListLayout> _listLayout;
	CPMemoryPool* _pool;

}

@property (nonatomic,retain) id<SBIconListLayout> listLayout;                   //@synthesize listLayout=_listLayout - In the implementation block
@property (nonatomic,retain) CPMemoryPool * pool;                               //@synthesize pool=_pool - In the implementation block
@property (assign,nonatomic) unsigned treatedCells;                             //@synthesize treatedCells=_treatedCells - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCells; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
+(CGSize)sizeForLayout:(id)arg1 ;
+(CGRect)rectAtIndex:(unsigned long long)arg1 inLayout:(id)arg2 maxCount:(unsigned long long)arg3 ;
+(id)gridImageForLayout:(id)arg1 previousGridImage:(id)arg2 previousGridCellIndexToUpdate:(unsigned long long)arg3 pool:(id)arg4 cellImageDrawBlock:(/*^block*/id)arg5 ;
+(unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1 inLayout:(id)arg2 ;
+(id)gridImageForLayout:(id)arg1 cellImageDrawBlock:(/*^block*/id)arg2 ;
+(id)gridImageForLayout:(id)arg1 pool:(id)arg2 cellImageDrawBlock:(/*^block*/id)arg3 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(unsigned long long)numberOfCells;
-(CPMemoryPool *)pool;
-(void)setPool:(CPMemoryPool *)arg1 ;
-(void)setListLayout:(id<SBIconListLayout>)arg1 ;
-(id<SBIconListLayout>)listLayout;
-(void)setTreatedCells:(unsigned)arg1 ;
-(id)gridImageByPatchingCellAtIndex:(unsigned long long)arg1 cellImageProviderBlock:(/*^block*/id)arg2 ;
-(id)iconImageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isIconImageTreatedAtIndex:(unsigned long long)arg1 ;
-(unsigned)treatedCells;
@end

