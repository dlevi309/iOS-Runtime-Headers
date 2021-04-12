/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class wspContext;

@interface wspQueryStatusIn : NSObject {

	SCD_Struct_ws1 msghdr;
	wspContext* _wctx;

}

@property (retain) wspContext * wctx;              //@synthesize wctx=_wctx - In the implementation block
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(wspContext *)wctx;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
@end

