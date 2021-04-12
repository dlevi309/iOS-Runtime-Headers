/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@interface AEGridEnvironment : NSObject {

	double _headerHeight;
	double _targetBottomMargin;
	double _minimumTileHeight;
	double _scale;
	double _compactExtensionHeight;

}

@property (assign,nonatomic) double headerHeight;                        //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double targetBottomMargin;                  //@synthesize targetBottomMargin=_targetBottomMargin - In the implementation block
@property (assign,nonatomic) double minimumTileHeight;                   //@synthesize minimumTileHeight=_minimumTileHeight - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double compactExtensionHeight;              //@synthesize compactExtensionHeight=_compactExtensionHeight - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(double)targetBottomMargin;
-(void)setTargetBottomMargin:(double)arg1 ;
-(double)minimumTileHeight;
-(void)setMinimumTileHeight:(double)arg1 ;
-(double)compactExtensionHeight;
-(void)setCompactExtensionHeight:(double)arg1 ;
@end

