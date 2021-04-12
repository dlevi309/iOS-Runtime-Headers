/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/ONOSearching.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class ONOXMLDocument, NSString, NSDictionary, NSNumber, NSDate, NSArray;

@interface ONOXMLElement : NSObject <ONOSearching, NSCopying, NSCoding> {

	ONOXMLDocument* _document;
	NSString* _rawXMLString;
	NSString* _tag;
	unsigned long long _lineNumber;
	NSString* _namespace;
	ONOXMLElement* _parent;
	ONOXMLElement* _previousSibling;
	ONOXMLElement* _nextSibling;
	NSDictionary* _attributes;
	NSString* _stringValue;
	NSNumber* _numberValue;
	NSDate* _dateValue;
	xmlNode* _xmlNode;

}

@property (nonatomic,copy) NSString * rawXMLString;                         //@synthesize rawXMLString=_rawXMLString - In the implementation block
@property (nonatomic,copy) NSString * tag;                                  //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) unsigned long long lineNumber;                 //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,copy) NSString * namespace;                            //@synthesize namespace=_namespace - In the implementation block
@property (nonatomic,retain) ONOXMLElement * parent;                        //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children; 
@property (nonatomic,retain) ONOXMLElement * previousSibling;               //@synthesize previousSibling=_previousSibling - In the implementation block
@property (nonatomic,retain) ONOXMLElement * nextSibling;                   //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                          //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSNumber * numberValue;                          //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy) NSDate * dateValue;                              //@synthesize dateValue=_dateValue - In the implementation block
@property (assign,nonatomic) xmlNode* xmlNode;                              //@synthesize xmlNode=_xmlNode - In the implementation block
@property (assign,nonatomic,__weak) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
@property (getter=isBlank,nonatomic,readonly) BOOL blank; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(ONOXMLElement *)parent;
-(void)setParent:(ONOXMLElement *)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)valueForAttribute:(id)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(unsigned long long)lineNumber;
-(NSString *)tag;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(NSArray *)children;
-(ONOXMLElement *)nextSibling;
-(void)setTag:(NSString *)arg1 ;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(ONOXMLDocument *)document;
-(ONOXMLElement *)previousSibling;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(NSNumber *)numberValue;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setNextSibling:(ONOXMLElement *)arg1 ;
-(id)childrenWithTag:(id)arg1 ;
-(NSString *)namespace;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
-(id)XPath:(id)arg1 ;
-(id)functionResultByEvaluatingXPath:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithXPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithXPath:(id)arg1 ;
-(id)CSS:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithCSS:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithCSS:(id)arg1 ;
-(id)valueForAttribute:(id)arg1 inNamespace:(id)arg2 ;
-(id)firstChildWithTag:(id)arg1 ;
-(id)firstChildWithTag:(id)arg1 inNamespace:(id)arg2 ;
-(id)childrenWithTag:(id)arg1 inNamespace:(id)arg2 ;
-(id)childrenAtIndexes:(id)arg1 ;
-(id)indexesOfChildrenPassingTest:(/*^block*/id)arg1 ;
-(BOOL)isBlank;
-(xmlXPathObject*)xmlXPathObjectPtrWithXPath:(id)arg1 ;
-(NSString *)rawXMLString;
-(void)setRawXMLString:(NSString *)arg1 ;
-(void)setNamespace:(NSString *)arg1 ;
-(void)setPreviousSibling:(ONOXMLElement *)arg1 ;
@end

