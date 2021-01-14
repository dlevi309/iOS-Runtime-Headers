/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENXMLWriterDelegate;
#import <ActionKit/ActionKit-Structs.h>
@class NSMutableString, ENXMLDTD, NSString;

@interface ENXMLWriter : NSObject {

	id<ENXMLWriterDelegate> _delegate;
	NSMutableString* _contents;
	xmlTextWriterRef _xmlWriter;
	xmlOutputBuffer* _xmlOutputBuffer;
	ENXMLDTD* _dtd;
	NSString* _currentElementName;
	unsigned long long _openElementCount;

}

@property (nonatomic,retain) NSString * currentElementName;                        //@synthesize currentElementName=_currentElementName - In the implementation block
@property (assign,nonatomic,__weak) id<ENXMLWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ENXMLDTD * dtd;                                       //@synthesize dtd=_dtd - In the implementation block
@property (assign,nonatomic) unsigned long long openElementCount;                  //@synthesize openElementCount=_openElementCount - In the implementation block
@property (nonatomic,readonly) NSString * contents;                                //@synthesize contents=_contents - In the implementation block
-(NSString *)contents;
-(ENXMLDTD *)dtd;
-(id)init;
-(id<ENXMLWriterDelegate>)delegate;
-(void)setDelegate:(id<ENXMLWriterDelegate>)arg1 ;
-(void)writeString:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setDtd:(ENXMLDTD *)arg1 ;
-(void)endElement;
-(void)dealloc;
-(BOOL)startElement:(id)arg1 withAttributes:(id)arg2 ;
-(BOOL)startElement:(id)arg1 ;
-(BOOL)startElement:(id)arg1 attributes:(id)arg2 ;
-(void)startCDATA;
-(void)endCDATA;
-(void)startDocument;
-(void)endDocument;
-(BOOL)writeElement:(id)arg1 attributes:(id)arg2 content:(id)arg3 ;
-(BOOL)writeAttributeName:(id)arg1 value:(id)arg2 ;
-(void)writeString:(id)arg1 raw:(BOOL)arg2 ;
-(void)writeRawString:(id)arg1 ;
-(void)writeCDATA:(id)arg1 ;
-(BOOL)writeElement:(id)arg1 withAttributes:(id)arg2 content:(id)arg3 ;
-(NSString *)currentElementName;
-(void)setCurrentElementName:(NSString *)arg1 ;
-(unsigned long long)openElementCount;
-(void)setOpenElementCount:(unsigned long long)arg1 ;
@end

