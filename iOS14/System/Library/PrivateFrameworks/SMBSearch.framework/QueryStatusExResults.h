/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@interface QueryStatusExResults : NSObject {

	unsigned _qStatus;
	unsigned _cFilteredDocuments;
	unsigned _cDocumentsToFilter;
	unsigned _dwRatioFinishedDenominator;
	unsigned _dwRatioFinishedNumerator;
	unsigned _rowsetBookMark;
	unsigned _cRowsTotal;
	unsigned _maxRank;
	unsigned _cResultsFound;
	unsigned _whereID;

}

@property (assign) unsigned qStatus;                                 //@synthesize qStatus=_qStatus - In the implementation block
@property (assign) unsigned cFilteredDocuments;                      //@synthesize cFilteredDocuments=_cFilteredDocuments - In the implementation block
@property (assign) unsigned cDocumentsToFilter;                      //@synthesize cDocumentsToFilter=_cDocumentsToFilter - In the implementation block
@property (assign) unsigned dwRatioFinishedDenominator;              //@synthesize dwRatioFinishedDenominator=_dwRatioFinishedDenominator - In the implementation block
@property (assign) unsigned dwRatioFinishedNumerator;                //@synthesize dwRatioFinishedNumerator=_dwRatioFinishedNumerator - In the implementation block
@property (assign) unsigned rowsetBookMark;                          //@synthesize rowsetBookMark=_rowsetBookMark - In the implementation block
@property (assign) unsigned cRowsTotal;                              //@synthesize cRowsTotal=_cRowsTotal - In the implementation block
@property (assign) unsigned maxRank;                                 //@synthesize maxRank=_maxRank - In the implementation block
@property (assign) unsigned cResultsFound;                           //@synthesize cResultsFound=_cResultsFound - In the implementation block
@property (assign) unsigned whereID;                                 //@synthesize whereID=_whereID - In the implementation block
-(id)init;
-(unsigned)maxRank;
-(unsigned)whereID;
-(unsigned)qStatus;
-(void)setMaxRank:(unsigned)arg1 ;
-(void)setWhereID:(unsigned)arg1 ;
-(void)setQStatus:(unsigned)arg1 ;
-(unsigned)cFilteredDocuments;
-(void)setCFilteredDocuments:(unsigned)arg1 ;
-(unsigned)cDocumentsToFilter;
-(void)setCDocumentsToFilter:(unsigned)arg1 ;
-(unsigned)dwRatioFinishedDenominator;
-(void)setDwRatioFinishedDenominator:(unsigned)arg1 ;
-(unsigned)dwRatioFinishedNumerator;
-(void)setDwRatioFinishedNumerator:(unsigned)arg1 ;
-(unsigned)rowsetBookMark;
-(void)setRowsetBookMark:(unsigned)arg1 ;
-(unsigned)cRowsTotal;
-(void)setCRowsTotal:(unsigned)arg1 ;
-(unsigned)cResultsFound;
-(void)setCResultsFound:(unsigned)arg1 ;
@end

