/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

