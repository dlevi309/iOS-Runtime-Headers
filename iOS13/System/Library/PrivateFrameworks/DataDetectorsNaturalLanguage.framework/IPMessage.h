/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class NSMutableArray, NSMutableDictionary, NSString, IPPerson, NSArray, NSDate;

@interface IPMessage : NSObject {

	NSMutableArray* _messageUnits;
	NSMutableDictionary* _keywordsDictionary;
	NSString* _lowercaseSubject;
	BOOL _isReply;
	BOOL _isSent;
	BOOL _isGroupConversation;
	BOOL _isSenderSignificant;
	NSString* _identifier;
	NSString* _threadIdentifier;
	NSString* _subject;
	IPPerson* _sender;
	NSArray* _recipients;
	NSDate* _dateSent;
	NSString* _type;
	NSString* _htmlContent;
	unsigned long long _messageUnitsTextLength;

}

@property (retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * threadIdentifier;                              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (retain) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (retain) IPPerson * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * dateSent;                                        //@synthesize dateSent=_dateSent - In the implementation block
@property (retain) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (retain) NSString * htmlContent;                                   //@synthesize htmlContent=_htmlContent - In the implementation block
@property (readonly) unsigned long long messageUnitsTextLength;              //@synthesize messageUnitsTextLength=_messageUnitsTextLength - In the implementation block
@property (readonly) NSString * lowercaseSubject; 
@property (assign) BOOL isReply;                                             //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits; 
@property (assign) BOOL isSent;                                              //@synthesize isSent=_isSent - In the implementation block
@property (assign) BOOL isGroupConversation;                                 //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (assign) BOOL isSenderSignificant;                                 //@synthesize isSenderSignificant=_isSenderSignificant - In the implementation block
-(id)init;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(IPPerson *)sender;
-(NSArray *)recipients;
-(void)setSender:(IPPerson *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(BOOL)isSent;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(BOOL)isReply;
-(void)setIsReply:(BOOL)arg1 ;
-(NSString *)htmlContent;
-(BOOL)isGroupConversation;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setIsGroupConversation:(BOOL)arg1 ;
-(BOOL)isSenderSignificant;
-(void)setIsSenderSignificant:(BOOL)arg1 ;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 type:(id)arg6 ;
-(id)initWithDateSent:(id)arg1 subject:(id)arg2 ;
-(NSString *)lowercaseSubject;
-(unsigned long long)messageUnitsTextLength;
-(id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2 ;
-(void)setHtmlContent:(NSString *)arg1 ;
-(void)addMessageUnit:(id)arg1 ;
-(id)initWithDateSent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 ;
-(id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3 ;
-(void)addDetectedKeyword:(id)arg1 classificationTypeIdentifier:(id)arg2 ;
-(id)detectedKeywordsDictionary;
@end

