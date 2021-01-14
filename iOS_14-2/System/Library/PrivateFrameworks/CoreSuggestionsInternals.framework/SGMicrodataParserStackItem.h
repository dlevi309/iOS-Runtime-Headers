/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class SGMicrodataDocument, NSArray;

@interface SGMicrodataParserStackItem : NSObject {

	SGMicrodataDocument* _document;
	SGMicrodataParserStackItem* _parent;
	NSArray* _textConsumers;
	NSArray* _itemScopes;

}

@property (readonly) SGMicrodataDocument * document;                   //@synthesize document=_document - In the implementation block
@property (readonly) SGMicrodataParserStackItem * parent;              //@synthesize parent=_parent - In the implementation block
@property (readonly) NSArray * textConsumers;                          //@synthesize textConsumers=_textConsumers - In the implementation block
@property (readonly) NSArray * itemScopes;                             //@synthesize itemScopes=_itemScopes - In the implementation block
-(SGMicrodataParserStackItem *)parent;
-(id)initWithDocument:(id)arg1 ;
-(SGMicrodataDocument *)document;
-(id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4 ;
-(NSArray *)textConsumers;
-(NSArray *)itemScopes;
@end

