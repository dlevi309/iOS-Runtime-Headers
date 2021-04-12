/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class NSMutableArray;

@interface pidMapper : NSObject {

	unsigned _rowLength;
	unsigned _colValueLen;
	NSMutableArray* _pidMap;
	NSMutableArray* _columnSet;
	NSMutableArray* _colTableArr;

}

@property (retain) NSMutableArray * pidMap;                   //@synthesize pidMap=_pidMap - In the implementation block
@property (retain) NSMutableArray * columnSet;                //@synthesize columnSet=_columnSet - In the implementation block
@property (assign) unsigned rowLength;                        //@synthesize rowLength=_rowLength - In the implementation block
@property (assign) unsigned colValueLen;                      //@synthesize colValueLen=_colValueLen - In the implementation block
@property (retain) NSMutableArray * colTableArr;              //@synthesize colTableArr=_colTableArr - In the implementation block
-(NSMutableArray *)pidMap;
-(void)setRowLength:(unsigned)arg1 ;
-(unsigned)rowLength;
-(id)initWithCtx:(id)arg1 ;
-(NSMutableArray *)colTableArr;
-(void)setPidMap:(NSMutableArray *)arg1 ;
-(NSMutableArray *)columnSet;
-(void)setColumnSet:(NSMutableArray *)arg1 ;
-(unsigned)colValueLen;
-(void)setColValueLen:(unsigned)arg1 ;
-(void)setColTableArr:(NSMutableArray *)arg1 ;
@end

