/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


#import <SMBSearch/SMBSearch-Structs.h>
@interface wspFreeCursorIn : NSObject {

	SCD_Struct_ws1 msghdr;
	unsigned _cursorToFree;

}

@property (assign) unsigned cursorToFree;              //@synthesize cursorToFree=_cursorToFree - In the implementation block
-(id)initWithCursor:(unsigned)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(unsigned)cursorToFree;
-(void)setCursorToFree:(unsigned)arg1 ;
@end

