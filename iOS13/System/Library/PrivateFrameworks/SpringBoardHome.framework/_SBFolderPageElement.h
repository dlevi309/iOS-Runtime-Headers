/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class SBIconGridImage, SBFolderIcon;

@interface _SBFolderPageElement : NSObject {

	BOOL _gridImagePossible;
	SBIconGridImage* _gridImage;
	unsigned long long _visibleRow;
	unsigned long long _pageIndex;
	SBFolderIcon* _folderIcon;

}

@property (nonatomic,retain) SBIconGridImage * gridImage;                                    //@synthesize gridImage=_gridImage - In the implementation block
@property (assign,getter=isGridImagePossible,nonatomic) BOOL gridImagePossible;              //@synthesize gridImagePossible=_gridImagePossible - In the implementation block
@property (assign,nonatomic) unsigned long long visibleRow;                                  //@synthesize visibleRow=_visibleRow - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                                   //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic,__weak) SBFolderIcon * folderIcon;                               //@synthesize folderIcon=_folderIcon - In the implementation block
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(SBFolderIcon *)folderIcon;
-(unsigned long long)firstVisibleMiniIconIndex;
-(void)setFolderIcon:(SBFolderIcon *)arg1 ;
-(unsigned long long)visibleRow;
-(unsigned long long)firstVisibleRowForGap;
-(SBIconGridImage *)gridImage;
-(void)setGridImage:(SBIconGridImage *)arg1 ;
-(BOOL)isGridImagePossible;
-(void)setGridImagePossible:(BOOL)arg1 ;
-(void)setVisibleRow:(unsigned long long)arg1 ;
@end

