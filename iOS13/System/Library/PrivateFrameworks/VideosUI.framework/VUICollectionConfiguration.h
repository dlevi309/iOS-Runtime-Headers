/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUICollectionConfiguration : NSObject {

	BOOL _hideLockupTitles;
	long long _gridFilter;
	long long _gridStyle;
	long long _gridType;
	double _minimumLineSpacing;

}

@property (assign,nonatomic) long long gridFilter;                   //@synthesize gridFilter=_gridFilter - In the implementation block
@property (assign,nonatomic) long long gridStyle;                    //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                     //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) double minimumLineSpacing;              //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) BOOL hideLockupTitles;                  //@synthesize hideLockupTitles=_hideLockupTitles - In the implementation block
-(void)setMinimumLineSpacing:(double)arg1 ;
-(double)minimumLineSpacing;
-(long long)gridType;
-(long long)gridStyle;
-(BOOL)hideLockupTitles;
-(long long)gridFilter;
-(void)setGridFilter:(long long)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
-(void)setHideLockupTitles:(BOOL)arg1 ;
@end

