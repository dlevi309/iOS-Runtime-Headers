/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface USOSerializedGraph : NSObject <NSSecureCoding> {

	NSString* _printedForm;
	NSArray* _nodes;
	NSArray* _edges;

}

@property (nonatomic,retain) NSString * printedForm;              //@synthesize printedForm=_printedForm - In the implementation block
@property (nonatomic,retain) NSArray * nodes;                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * edges;                     //@synthesize edges=_edges - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNodes:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)edges;
-(id)initWithCoder:(id)arg1 ;
-(void)setEdges:(NSArray *)arg1 ;
-(NSArray *)nodes;
-(NSString *)printedForm;
-(unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >*)toCppUsoGraph:(shared_ptr<siri::ontology::UsoVocabManager>*)arg1 withError:(id*)arg2 ;
-(id)initWithUsoGraph:(UsoGraph*)arg1 withError:(id*)arg2 ;
-(id)createSerializedNode:(const UsoGraphNode*)arg1 withError:(id*)arg2 ;
-(const OntologyNodeName*)getOrCreateNodeName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(const OntologyVerbName*)getOrCreateVerbName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(const OntologyEdgeName*)getOrCreateEdgeName:(id)arg1 withVocabManager:(shared_ptr<siri::ontology::UsoVocabManager>*)arg2 withError:(id*)arg3 ;
-(id)initWithNodes:(id)arg1 edges:(id)arg2 ;
-(void)setPrintedForm:(NSString *)arg1 ;
-(id)getDebugGraphString;
-(id)getDebugGraphStringSiriNl;
@end

