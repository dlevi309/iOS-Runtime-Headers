/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/


@interface AEGridConfiguration : NSObject {

	BOOL _oversized;
	unsigned long long _rowCount;
	double _tileHeight;

}

@property (assign,nonatomic) unsigned long long rowCount;                    //@synthesize rowCount=_rowCount - In the implementation block
@property (assign,nonatomic) double tileHeight;                              //@synthesize tileHeight=_tileHeight - In the implementation block
@property (assign,getter=isOversized,nonatomic) BOOL oversized;              //@synthesize oversized=_oversized - In the implementation block
+(id)configurationForEnvironment:(id)arg1 ;
-(unsigned long long)rowCount;
-(double)tileHeight;
-(BOOL)isOversized;
-(void)setRowCount:(unsigned long long)arg1 ;
-(void)setTileHeight:(double)arg1 ;
-(void)setOversized:(BOOL)arg1 ;
@end

