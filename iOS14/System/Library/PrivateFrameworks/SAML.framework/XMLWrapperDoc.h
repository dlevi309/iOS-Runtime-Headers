/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@class NSMutableDictionary, NSData, XMLWrapperElement, XMLWrapperQuery, NSDictionary;

@interface XMLWrapperDoc : NSObject {

	xmlDoc* _doc;
	xmlNode* _docNode;
	NSMutableDictionary* _namespaces;
	NSData* _xmlData;
	NSData* _schemaData;
	XMLWrapperElement* _documentElement;
	XMLWrapperQuery* _query;

}

@property (nonatomic,retain) NSData * xmlData;                                 //@synthesize xmlData=_xmlData - In the implementation block
@property (nonatomic,retain) NSData * schemaData;                              //@synthesize schemaData=_schemaData - In the implementation block
@property (nonatomic,retain) XMLWrapperElement * documentElement;              //@synthesize documentElement=_documentElement - In the implementation block
@property (nonatomic,retain) XMLWrapperQuery * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSDictionary * namespaces;                      //@synthesize namespaces=_namespaces - In the implementation block
-(XMLWrapperQuery *)query;
-(XMLWrapperElement *)documentElement;
-(xmlDoc*)docPtr;
-(NSDictionary *)namespaces;
-(xmlNode*)nodePtr;
-(void)setQuery:(XMLWrapperQuery *)arg1 ;
-(NSData *)xmlData;
-(void)dealloc;
-(id)xmlString:(id*)arg1 ;
-(void)setNamespace:(id)arg1 ;
-(void)setXmlData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(NSData *)schemaData;
-(void)setSchemaData:(NSData *)arg1 ;
-(BOOL)createDocument:(id*)arg1 ;
-(id)createDocumentElement:(id*)arg1 ;
-(id)getResultsByXpathQuery:(id)arg1 error:(id*)arg2 ;
-(xmlDoc*)docNode:(id*)arg1 ;
-(BOOL)setXMLDoc:(id*)arg1 ;
-(id)firstResultByXpathQuery:(id)arg1 error:(id*)arg2 ;
-(void)setDocumentElement:(XMLWrapperElement *)arg1 ;
@end

