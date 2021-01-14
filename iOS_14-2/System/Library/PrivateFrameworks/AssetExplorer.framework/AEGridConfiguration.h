/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)tileHeight;
-(void)setTileHeight:(double)arg1 ;
-(void)setRowCount:(unsigned long long)arg1 ;
-(BOOL)isOversized;
-(unsigned long long)rowCount;
-(void)setOversized:(BOOL)arg1 ;
@end

