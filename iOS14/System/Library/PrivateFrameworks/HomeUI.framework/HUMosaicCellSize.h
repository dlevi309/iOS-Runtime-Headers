/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUMosaicCellSize : NSObject {

	unsigned long long _sizeDescription;
	unsigned long long _numRows;
	unsigned long long _numCols;

}

@property (assign,nonatomic) unsigned long long sizeDescription;              //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (assign,nonatomic) unsigned long long numRows;                      //@synthesize numRows=_numRows - In the implementation block
@property (assign,nonatomic) unsigned long long numCols;                      //@synthesize numCols=_numCols - In the implementation block
+(id)createMosaicCellSizeForSizeDescription:(unsigned long long)arg1 ;
-(unsigned long long)sizeDescription;
-(void)setSizeDescription:(unsigned long long)arg1 ;
-(unsigned long long)numRows;
-(unsigned long long)numCols;
-(void)setNumCols:(unsigned long long)arg1 ;
-(void)setNumRows:(unsigned long long)arg1 ;
@end

