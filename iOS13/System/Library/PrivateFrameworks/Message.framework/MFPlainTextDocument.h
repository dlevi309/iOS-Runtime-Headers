/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(id)string;
-(unsigned long long)fragmentCount;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned)arg3 ;
-(id)quotedString:(unsigned)arg1 ;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned long long)arg3 ;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
@end

