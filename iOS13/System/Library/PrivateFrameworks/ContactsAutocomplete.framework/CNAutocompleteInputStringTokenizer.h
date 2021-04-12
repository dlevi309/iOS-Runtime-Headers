/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject {

	CNFuture* _nameStringTokenizer;

}

@property (retain) CNFuture * nameStringTokenizer;              //@synthesize nameStringTokenizer=_nameStringTokenizer - In the implementation block
+(id)tokensFromString:(id)arg1 ;
+(id)lazyNameStringTokenizerWithLocale:(id)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg1 ;
-(id)tokensFromString:(id)arg1 ;
-(void)setNameStringTokenizer:(CNFuture *)arg1 ;
-(/*^block*/id)expandCJKNames;
-(CNFuture *)nameStringTokenizer;
@end

