/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSMutableString, NSMutableArray;

@interface MFPlainTextDocument : NSObject {

	NSMutableString* _text;
	NSMutableArray* _fragments;

}
-(id)archivedRepresentation;
-(void)appendArchivedRepresentation:(id)arg1 ;
-(unsigned long long)fragmentCount;
-(id)string;
-(void)appendString:(id)arg1 withQuoteLevel:(unsigned)arg2 ;
-(void)getFormatFlowedString:(id*)arg1 insertedTrailingSpaces:(BOOL*)arg2 encoding:(unsigned)arg3 ;
-(id)quotedString:(unsigned)arg1 ;
-(void)getString:(id*)arg1 quoteLevel:(unsigned*)arg2 ofFragmentAtIndex:(unsigned long long)arg3 ;
@end

