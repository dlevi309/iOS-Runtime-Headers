/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSArray, XMLWrapperQuery, NSDictionary;

@interface XMLWrapperElement : NSObject {

	xmlNode* _xmlNode;
	BOOL _ownsXMLNode;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _namespaces;
	NSMutableArray* _elements;
	NSString* _tagName;
	NSString* _textContent;
	NSArray* _childElementSequence;
	XMLWrapperQuery* _query;

}

@property (nonatomic,retain) NSString * tagName;                          //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,retain) XMLWrapperQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * textContent;                      //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSDictionary * namespaces;                 //@synthesize namespaces=_namespaces - In the implementation block
@property (nonatomic,readonly) NSArray * elements; 
@property (nonatomic,retain) NSArray * childElementSequence;              //@synthesize childElementSequence=_childElementSequence - In the implementation block
-(XMLWrapperQuery *)query;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(NSString *)tagName;
-(NSDictionary *)attributes;
-(id)getElementsByTagName:(id)arg1 ;
-(NSString *)textContent;
-(NSDictionary *)namespaces;
-(void)setTagName:(NSString *)arg1 ;
-(void)setTextContent:(NSString *)arg1 ;
-(void)setQuery:(XMLWrapperQuery *)arg1 ;
-(void)dealloc;
-(id)attributeWithName:(id)arg1 ;
-(id)xmlString:(id*)arg1 ;
-(void)setNamespace:(id)arg1 ;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 ;
-(id)initWithTagName:(id)arg1 error:(id*)arg2 ;
-(id)firstElementByTagName:(id)arg1 ;
-(void)setChildElementSequence:(NSArray *)arg1 ;
-(void)replaceChildElement:(id)arg1 newElement:(id)arg2 ;
-(void)addChildElement:(id)arg1 before:(id)arg2 ;
-(void)addChildElement:(id)arg1 ;
-(id)initWithNode:(xmlNode*)arg1 doc:(xmlDoc*)arg2 query:(id)arg3 error:(id*)arg4 ;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(id)getResultsByXpathQuery:(id)arg1 ;
-(NSArray *)childElementSequence;
-(void)reorderChildElements;
-(void)removeChildElement:(id)arg1 ;
-(id)firstResultByXpathQuery:(id)arg1 ;
@end

