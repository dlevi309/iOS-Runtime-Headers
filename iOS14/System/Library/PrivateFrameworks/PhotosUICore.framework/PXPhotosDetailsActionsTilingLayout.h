/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@interface PXPhotosDetailsActionsTilingLayout : PXTilingLayout {

	unsigned long long _dataSourceIdentifier;
	BOOL _shouldShowSeparators;
	BOOL _shouldInsetAllSeparators;
	long long _numberOfItems;
	double _rowHeight;
	double _separatorHeight;
	long long __numberOfSeparators;

}

@property (nonatomic,readonly) long long _numberOfSeparators;              //@synthesize _numberOfSeparators=__numberOfSeparators - In the implementation block
@property (nonatomic,readonly) long long numberOfItems;                    //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) double rowHeight;                             //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double separatorHeight;                       //@synthesize separatorHeight=_separatorHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSeparators;                    //@synthesize shouldShowSeparators=_shouldShowSeparators - In the implementation block
@property (assign,nonatomic) BOOL shouldInsetAllSeparators;                //@synthesize shouldInsetAllSeparators=_shouldInsetAllSeparators - In the implementation block
-(CGRect)contentBounds;
-(double)separatorHeight;
-(void)prepareLayout;
-(long long)numberOfItems;
-(void)setRowHeight:(double)arg1 ;
-(void)setSeparatorHeight:(double)arg1 ;
-(CGRect)_frameForItemAtIndex:(long long)arg1 ;
-(CGRect)_frameForSeparatorAtIndex:(long long)arg1 ;
-(BOOL)shouldShowSeparators;
-(void)setShouldShowSeparators:(BOOL)arg1 ;
-(BOOL)shouldInsetAllSeparators;
-(void)setShouldInsetAllSeparators:(BOOL)arg1 ;
-(long long)_numberOfSeparators;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(double)rowHeight;
-(id)initWithNumberOfItems:(long long)arg1 ;
-(double)_contentWidth;
@end

