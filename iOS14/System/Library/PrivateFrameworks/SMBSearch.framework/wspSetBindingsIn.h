/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class wspContext;

@interface wspSetBindingsIn : NSObject {

	SCD_Struct_ws1 msghdr;
	wspContext* _wctx;

}

@property (retain) wspContext * wctx;              //@synthesize wctx=_wctx - In the implementation block
-(wspContext *)wctx;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
@end

