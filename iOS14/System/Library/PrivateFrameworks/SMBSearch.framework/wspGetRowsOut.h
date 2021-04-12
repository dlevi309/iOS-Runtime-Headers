/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResults:(searchResults *)arg1 ;
-(searchResults *)results;
-(wspContext *)wctx;
-(wspHeader *)whdr;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
-(void)setRowsReturned:(unsigned)arg1 ;
-(unsigned)rowsReturned;
-(int)decodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setWhdr:(wspHeader *)arg1 ;
@end

