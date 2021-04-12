/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject {

	SGMicrodataParserStackItem* _stackItem;

}

@property (nonatomic,readonly) SGMicrodataParserStackItem * stackItem;              //@synthesize stackItem=_stackItem - In the implementation block
+(id)parse:(id)arg1 ;
+(id)whitespaceSplit:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)endElement;
-(void)startElement:(id)arg1 withAttributes:(id)arg2 ;
-(void)textContent:(id)arg1 ;
-(SGMicrodataParserStackItem *)stackItem;
@end

