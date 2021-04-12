/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDBlipContext.h>

@interface ESDMetafileBlipContext : ESDBlipContext {

	unsigned mCb;
	unsigned defaultHeaderSize;

}

@property (assign) unsigned defaultHeaderSize; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 uncompressed:(unsigned)arg3 stream:(SsrwOOStream*)arg4 streamID:(unsigned)arg5 ;
-(void)setDefaultHeaderSize:(unsigned)arg1 ;
-(unsigned)defaultHeaderSize;
@end

