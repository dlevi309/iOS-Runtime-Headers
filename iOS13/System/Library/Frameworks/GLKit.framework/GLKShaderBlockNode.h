/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/

#import <GLKit/GLKit-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying> {

	GLKBigInt_s _mask;
	GLKShaderBlockNode* _parent;
	GLKShaderBlockNode* _next;
	GLKShaderBlockNode* _children;
	NSString* _label;
	NSString* _loopVar;
	int _type;
	int _unrollCt;
	unsigned _index;
	NSMutableString* _blockText;
	int _propertyClass;
	BOOL _indexedMask;

}

@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * loopVar;                           //@synthesize loopVar=_loopVar - In the implementation block
@property (nonatomic,retain) NSMutableString * blockText;                //@synthesize blockText=_blockText - In the implementation block
@property (assign,nonatomic) GLKShaderBlockNode * parent;                //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) GLKShaderBlockNode * next;                  //@synthesize next=_next - In the implementation block
@property (assign,nonatomic) GLKShaderBlockNode * children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) GLKBigInt_s mask;                           //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) int unrollCt;                               //@synthesize unrollCt=_unrollCt - In the implementation block
@property (assign,nonatomic) unsigned index;                             //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) int propertyClass;                          //@synthesize propertyClass=_propertyClass - In the implementation block
@property (assign,nonatomic) BOOL indexedMask;                           //@synthesize indexedMask=_indexedMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(GLKBigInt_s*)arg3 ;
+(id)copyTreeWithRoot:(id)arg1 parent:(id)arg2 ;
+(void)buildUnrollNodeArray:(id)arg1 array:(id)arg2 ;
+(id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2 ;
+(void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned)arg5 indexString:(id)arg6 ;
+(void)insertNode:(id)arg1 afterSibling:(id)arg2 ;
+(GLKBigInt_s)maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3 ;
+(unsigned)nodeCt:(id)arg1 nodeCt:(unsigned*)arg2 ;
+(void)printTree:(id)arg1 ;
+(void)printTreeVerbose:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GLKShaderBlockNode *)parent;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setParent:(GLKShaderBlockNode *)arg1 ;
-(unsigned)index;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(GLKShaderBlockNode *)next;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(GLKBigInt_s)mask;
-(void)setMask:(GLKBigInt_s)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(GLKShaderBlockNode *)children;
-(void)setChildren:(GLKShaderBlockNode *)arg1 ;
-(void)setNext:(GLKShaderBlockNode *)arg1 ;
-(int)propertyClass;
-(void)setPropertyClass:(int)arg1 ;
-(int)unrollCt;
-(NSString *)loopVar;
-(NSMutableString *)blockText;
-(void)setUnrollCt:(int)arg1 ;
-(BOOL)indexedMask;
-(void)setIndexedMask:(BOOL)arg1 ;
-(void)setBlockText:(NSMutableString *)arg1 ;
-(void)setLoopVar:(NSString *)arg1 ;
@end

