/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration> {

	xmlXPathObject* _xmlXPath;
	unsigned long long _cursor;
	ONOXMLDocument* _document;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;               //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (assign,nonatomic) unsigned long long cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,retain) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
-(id)nextObject;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(id)allObjects;
-(unsigned long long)cursor;
-(ONOXMLDocument *)document;
-(void)dealloc;
-(void)setCursor:(unsigned long long)arg1 ;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

