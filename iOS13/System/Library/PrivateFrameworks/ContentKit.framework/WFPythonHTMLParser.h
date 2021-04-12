/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFPythonHTMLParserDelegate;
@class NSRegularExpression, NSString;

@interface WFPythonHTMLParser : NSObject {

	long long _currentLineNumber;
	long long _currentOffset;
	id<WFPythonHTMLParserDelegate> _delegate;
	NSRegularExpression* _interestingExpression;
	NSRegularExpression* _incompleteExpression;
	NSRegularExpression* _entityrefExpression;
	NSRegularExpression* _charrefExpression;
	NSRegularExpression* _startTagOpenExpression;
	NSRegularExpression* _commentCloseExpression;
	NSRegularExpression* _tagFindExpression;
	NSRegularExpression* _attributeFindExpression;
	NSRegularExpression* _locateStartTagEndExpression;
	NSRegularExpression* _endEndTagExpression;
	NSRegularExpression* _endTagFindExpression;
	NSString* _rawData;
	NSString* _cdataElement;

}

@property (nonatomic,retain) NSRegularExpression * interestingExpression;                      //@synthesize interestingExpression=_interestingExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * incompleteExpression;                     //@synthesize incompleteExpression=_incompleteExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * entityrefExpression;                      //@synthesize entityrefExpression=_entityrefExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * charrefExpression;                        //@synthesize charrefExpression=_charrefExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * startTagOpenExpression;                   //@synthesize startTagOpenExpression=_startTagOpenExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * commentCloseExpression;                   //@synthesize commentCloseExpression=_commentCloseExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * tagFindExpression;                        //@synthesize tagFindExpression=_tagFindExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * attributeFindExpression;                  //@synthesize attributeFindExpression=_attributeFindExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * locateStartTagEndExpression;              //@synthesize locateStartTagEndExpression=_locateStartTagEndExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * endEndTagExpression;                      //@synthesize endEndTagExpression=_endEndTagExpression - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * endTagFindExpression;                     //@synthesize endTagFindExpression=_endTagFindExpression - In the implementation block
@property (nonatomic,copy) NSString * rawData;                                                 //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,copy) NSString * cdataElement;                                            //@synthesize cdataElement=_cdataElement - In the implementation block
@property (assign,nonatomic) long long currentLineNumber;                                      //@synthesize currentLineNumber=_currentLineNumber - In the implementation block
@property (assign,nonatomic) long long currentOffset;                                          //@synthesize currentOffset=_currentOffset - In the implementation block
@property (assign,nonatomic,__weak) id<WFPythonHTMLParserDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)close;
-(id<WFPythonHTMLParserDelegate>)delegate;
-(void)setDelegate:(id<WFPythonHTMLParserDelegate>)arg1 ;
-(void)reset;
-(long long)currentOffset;
-(void)setCurrentOffset:(long long)arg1 ;
-(NSString *)rawData;
-(void)handleData:(id)arg1 ;
-(void)setRawData:(NSString *)arg1 ;
-(NSRegularExpression *)interestingExpression;
-(void)feed:(id)arg1 ;
-(void)setCdataElement:(NSString *)arg1 ;
-(void)parseDataAndEnd:(BOOL)arg1 ;
-(id)scanName:(long long)arg1 declarationStartPosition:(long long)arg2 location:(long long*)arg3 ;
-(long long)parseMarkedSection:(long long)arg1 ;
-(long long)parseComment:(long long)arg1 ;
-(long long)parseHTMLDeclaration:(long long)arg1 ;
-(long long)parseBogusComment:(long long)arg1 ;
-(long long)parseProcessingInstruction:(long long)arg1 ;
-(long long)parseStartTag:(long long)arg1 ;
-(long long)checkForWholeStartTag:(long long)arg1 ;
-(long long)parseEndTag:(long long)arg1 ;
-(long long)updatePosition:(long long)arg1 j:(long long)arg2 ;
-(void)handleStartEndTag:(id)arg1 attributes:(id)arg2 ;
-(void)handleStartTag:(id)arg1 attributes:(id)arg2 ;
-(void)handleEndTag:(id)arg1 ;
-(void)handleEntityRef:(id)arg1 ;
-(void)handleCharacterRef:(id)arg1 ;
-(void)handleComment:(id)arg1 ;
-(void)handleDoctypeDeclaration:(id)arg1 ;
-(void)handleProcessingInstruction:(id)arg1 ;
-(void)handleUnknownDeclaration:(id)arg1 ;
-(long long)currentLineNumber;
-(void)setCurrentLineNumber:(long long)arg1 ;
-(void)setInterestingExpression:(NSRegularExpression *)arg1 ;
-(NSRegularExpression *)incompleteExpression;
-(NSRegularExpression *)entityrefExpression;
-(NSRegularExpression *)charrefExpression;
-(NSRegularExpression *)startTagOpenExpression;
-(NSRegularExpression *)commentCloseExpression;
-(NSRegularExpression *)tagFindExpression;
-(NSRegularExpression *)attributeFindExpression;
-(NSRegularExpression *)locateStartTagEndExpression;
-(NSRegularExpression *)endEndTagExpression;
-(NSRegularExpression *)endTagFindExpression;
-(NSString *)cdataElement;
@end

