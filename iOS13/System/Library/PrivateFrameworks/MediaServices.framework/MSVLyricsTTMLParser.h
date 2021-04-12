/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSData, NSInputStream, NSObject, MSVLyricsSongInfo, NSError, NSMutableArray, MSVLyricsTextElement, NSMutableDictionary, NSString;

@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate> {

	BOOL _linesAreSortedByStartTime;
	NSData* _ttmlData;
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _parseQueue;
	MSVLyricsSongInfo* _lyricsInfo;
	NSError* _parserError;
	NSMutableArray* _elementStack;
	NSMutableArray* _lyricLines;
	MSVLyricsTextElement* _currentTextElement;
	NSMutableDictionary* _translationsMap;
	double _currentStartTime;

}

@property (nonatomic,retain) NSData * ttmlData;                                      //@synthesize ttmlData=_ttmlData - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                            //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parseQueue;                //@synthesize parseQueue=_parseQueue - In the implementation block
@property (nonatomic,retain) MSVLyricsSongInfo * lyricsInfo;                         //@synthesize lyricsInfo=_lyricsInfo - In the implementation block
@property (nonatomic,retain) NSError * parserError;                                  //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,retain) NSMutableArray * elementStack;                          //@synthesize elementStack=_elementStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * lyricLines;                            //@synthesize lyricLines=_lyricLines - In the implementation block
@property (nonatomic,retain) MSVLyricsTextElement * currentTextElement;              //@synthesize currentTextElement=_currentTextElement - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * translationsMap;                  //@synthesize translationsMap=_translationsMap - In the implementation block
@property (assign,nonatomic) double currentStartTime;                                //@synthesize currentStartTime=_currentStartTime - In the implementation block
@property (assign,nonatomic) BOOL linesAreSortedByStartTime;                         //@synthesize linesAreSortedByStartTime=_linesAreSortedByStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(NSError *)parserError;
-(NSInputStream *)inputStream;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(id)initWithTTMLStream:(id)arg1 ;
-(void)setLinesAreSortedByStartTime:(BOOL)arg1 ;
-(void)setCurrentStartTime:(double)arg1 ;
-(NSMutableArray *)elementStack;
-(NSMutableArray *)lyricLines;
-(NSMutableDictionary *)translationsMap;
-(MSVLyricsSongInfo *)lyricsInfo;
-(void)setTranslationsMap:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)parseQueue;
-(id)parseWithError:(id*)arg1 ;
-(void)setLyricsInfo:(MSVLyricsSongInfo *)arg1 ;
-(double)currentStartTime;
-(void)setCurrentTextElement:(MSVLyricsTextElement *)arg1 ;
-(BOOL)linesAreSortedByStartTime;
-(MSVLyricsTextElement *)currentTextElement;
-(void)setParserError:(NSError *)arg1 ;
-(id)initWithTTMLData:(id)arg1 ;
-(void)parseWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)ttmlData;
-(void)setTtmlData:(NSData *)arg1 ;
-(void)setParseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setElementStack:(NSMutableArray *)arg1 ;
-(void)setLyricLines:(NSMutableArray *)arg1 ;
@end

