/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/


@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject {

	CNFuture* _nameStringTokenizer;

}

@property (retain) CNFuture * nameStringTokenizer;              //@synthesize nameStringTokenizer=_nameStringTokenizer - In the implementation block
+(id)tokensFromString:(id)arg1 ;
+(id)lazyNameStringTokenizerWithLocale:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)init;
-(id)tokensFromString:(id)arg1 ;
-(void)setNameStringTokenizer:(CNFuture *)arg1 ;
-(/*^block*/id)expandCJKNames;
-(CNFuture *)nameStringTokenizer;
@end

