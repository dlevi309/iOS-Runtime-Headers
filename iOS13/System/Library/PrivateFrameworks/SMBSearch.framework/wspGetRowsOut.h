/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class wspHeader, wspContext, searchResults;

@interface wspGetRowsOut : NSObject {

	unsigned _rowsReturned;
	wspHeader* _whdr;
	wspContext* _wctx;
	searchResults* _results;

}

@property (retain) wspHeader * whdr;                     //@synthesize whdr=_whdr - In the implementation block
@property (retain) wspContext * wctx;                    //@synthesize wctx=_wctx - In the implementation block
@property (assign) unsigned rowsReturned;                //@synthesize rowsReturned=_rowsReturned - In the implementation block
@property (retain) searchResults * results;              //@synthesize results=_results - In the implementation block
-(searchResults *)results;
-(void)setResults:(searchResults *)arg1 ;
-(wspContext *)wctx;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
-(wspHeader *)whdr;
-(void)setRowsReturned:(unsigned)arg1 ;
-(unsigned)rowsReturned;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
@end

