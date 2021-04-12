/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@interface ColorMatchingTuning : NSObject {

	unsigned _attenuatePercentage;
	unsigned _gridRowsCount;
	unsigned _gridColsCount;

}

@property (assign,nonatomic) unsigned attenuatePercentage;              //@synthesize attenuatePercentage=_attenuatePercentage - In the implementation block
@property (assign,nonatomic) unsigned gridRowsCount;                    //@synthesize gridRowsCount=_gridRowsCount - In the implementation block
@property (assign,nonatomic) unsigned gridColsCount;                    //@synthesize gridColsCount=_gridColsCount - In the implementation block
-(unsigned)attenuatePercentage;
-(void)setAttenuatePercentage:(unsigned)arg1 ;
-(unsigned)gridRowsCount;
-(void)setGridRowsCount:(unsigned)arg1 ;
-(unsigned)gridColsCount;
-(void)setGridColsCount:(unsigned)arg1 ;
@end

