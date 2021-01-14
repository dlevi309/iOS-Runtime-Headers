/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDResponseBodyParser.h>

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser {

	BOOL _parsingStandaloneMessage;
	BOOL _isParsing;
	Class _messageClass;
	NSMutableData* _tailParserData;
	unsigned long long _curObjectLength;

}

@property (nonatomic,retain) NSMutableData * tailParserData;                  //@synthesize tailParserData=_tailParserData - In the implementation block
@property (assign,nonatomic) unsigned long long curObjectLength;              //@synthesize curObjectLength=_curObjectLength - In the implementation block
@property (assign,nonatomic) BOOL isParsing;                                  //@synthesize isParsing=_isParsing - In the implementation block
@property (assign,nonatomic) Class messageClass;                              //@synthesize messageClass=_messageClass - In the implementation block
@property (assign,nonatomic) BOOL parsingStandaloneMessage;                   //@synthesize parsingStandaloneMessage=_parsingStandaloneMessage - In the implementation block
-(void)processData:(id)arg1 ;
-(Class)messageClass;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(id)initWithQoS:(long long)arg1 ;
-(BOOL)parsingStandaloneMessage;
-(void)setParsingStandaloneMessage:(BOOL)arg1 ;
-(unsigned long long)curObjectLength;
-(void)setCurObjectLength:(unsigned long long)arg1 ;
-(BOOL)_parseObjectFromData:(id)arg1 rawData:(id)arg2 ;
-(void)setTailParserData:(NSMutableData *)arg1 ;
-(BOOL)isParsing;
-(void)setIsParsing:(BOOL)arg1 ;
-(NSMutableData *)tailParserData;
-(BOOL)_parseObjects:(BOOL)arg1 ;
@end

