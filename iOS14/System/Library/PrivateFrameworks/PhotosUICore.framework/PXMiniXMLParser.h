/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSScanner, NSCharacterSet;

@interface PXMiniXMLParser : NSObject {

	/*^block*/id _parsedCharactersBlock;
	/*^block*/id _parsedTagBlock;
	/*^block*/id _parsedEntityBlock;
	/*^block*/id _parsedErrorBlock;
	NSScanner* __scanner;
	NSCharacterSet* __syntaxMarkerCharactersSet;

}

@property (nonatomic,readonly) NSScanner * _scanner;                                     //@synthesize _scanner=__scanner - In the implementation block
@property (nonatomic,readonly) NSCharacterSet * _syntaxMarkerCharactersSet;              //@synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet - In the implementation block
@property (nonatomic,copy) id parsedCharactersBlock;                                     //@synthesize parsedCharactersBlock=_parsedCharactersBlock - In the implementation block
@property (nonatomic,copy) id parsedTagBlock;                                            //@synthesize parsedTagBlock=_parsedTagBlock - In the implementation block
@property (nonatomic,copy) id parsedEntityBlock;                                         //@synthesize parsedEntityBlock=_parsedEntityBlock - In the implementation block
@property (nonatomic,copy) id parsedErrorBlock;                                          //@synthesize parsedErrorBlock=_parsedErrorBlock - In the implementation block
-(void)parse;
-(id)initWithString:(id)arg1 ;
-(NSScanner *)_scanner;
-(id)init;
-(BOOL)_isAtEnd;
-(BOOL)_parseTag;
-(id)parsedErrorBlock;
-(BOOL)_parseCharacters;
-(BOOL)_parseEntity;
-(BOOL)_tryScanningUsingBlock:(/*^block*/id)arg1 ;
-(id)parsedCharactersBlock;
-(void)setParsedCharactersBlock:(id)arg1 ;
-(id)parsedTagBlock;
-(void)setParsedTagBlock:(id)arg1 ;
-(void)setParsedErrorBlock:(id)arg1 ;
-(id)parsedEntityBlock;
-(void)setParsedEntityBlock:(id)arg1 ;
-(NSCharacterSet *)_syntaxMarkerCharactersSet;
@end

