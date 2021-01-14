/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(unsigned long long)hash;
-(double)headerHeight;
-(BOOL)isEqual:(id)arg1 ;
-(double)targetBottomMargin;
-(void)setTargetBottomMargin:(double)arg1 ;
-(double)minimumTileHeight;
-(void)setMinimumTileHeight:(double)arg1 ;
-(double)compactExtensionHeight;
-(void)setCompactExtensionHeight:(double)arg1 ;
@end

