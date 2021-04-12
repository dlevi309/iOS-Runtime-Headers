/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/ONOSearching.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class ONOXMLElement, NSString, NSNumberFormatter, NSDateFormatter, NSMutableDictionary;

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding> {

	ONOXMLElement* _rootElement;
	xmlDoc* _xmlDocument;
	NSString* _version;
	unsigned long long _stringEncoding;
	NSNumberFormatter* _numberFormatter;
	NSDateFormatter* _dateFormatter;
	NSMutableDictionary* _defaultNamespaces;

}

@property (assign,nonatomic) xmlDoc* xmlDocument;                                  //@synthesize xmlDocument=_xmlDocument - In the implementation block
@property (nonatomic,retain) ONOXMLElement * rootElement;                          //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,copy) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long stringEncoding;                    //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                  //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultNamespaces;              //@synthesize defaultNamespaces=_defaultNamespaces - In the implementation block
+(id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)XMLDocumentWithData:(id)arg1 error:(id*)arg2 ;
+(id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)HTMLDocumentWithData:(id)arg1 error:(id*)arg2 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)CSS:(id)arg1 ;
-(void)setRootElement:(ONOXMLElement *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)XPath:(id)arg1 ;
-(id)description;
-(id)initWithDocument:(xmlDoc*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(ONOXMLElement *)rootElement;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(unsigned long long)stringEncoding;
-(id)elementWithNode:(xmlNode*)arg1 ;
-(id)functionResultByEvaluatingXPath:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithXPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithXPath:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithCSS:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithCSS:(id)arg1 ;
-(void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2 ;
-(id)enumeratorWithXPathObject:(xmlXPathObject*)arg1 ;
-(xmlDoc*)xmlDocument;
-(void)setXmlDocument:(xmlDoc*)arg1 ;
-(NSMutableDictionary *)defaultNamespaces;
-(void)setDefaultNamespaces:(NSMutableDictionary *)arg1 ;
@end

