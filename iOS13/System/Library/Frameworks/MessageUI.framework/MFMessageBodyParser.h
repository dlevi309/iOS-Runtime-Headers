/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFMessageBodyParserObject.h>

@class NSMutableArray, NSError;

@interface MFMessageBodyParser : MFMessageBodyParserObject {

	NSMutableArray* _subparsers;
	NSMutableArray* _elementPool;
	NSMutableArray* _paragraphNodes;
	/*^block*/id _foundMessageBodyElementBlock;
	NSError* _parserError;
	CFArrayRef _nodesStackCache;
	CFDictionaryRef _nodesLevelCache;
	CFDictionaryRef _nodesQuoteLevelCache;
	unsigned long long _options;

}

@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(BOOL)isLinebreakImpliedBeforeTagName:(id)arg1 ;
+(BOOL)isLinebreakImpliedAfterTagName:(id)arg1 ;
+(BOOL)cacheRetainsNodes;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(BOOL)parse;
-(id)parserError;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2 ;
-(void)flushParagraphNodes;
-(void)willBeginParsing;
-(BOOL)shouldProceedParsing;
-(BOOL)isLandmarkTagName:(id)arg1 ;
-(void)didFindError:(id)arg1 ;
-(BOOL)shouldIgnoreTagWithTagName:(id)arg1 ;
-(void)didFinishParsing;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)copyBlocks;
-(Class)messageBodyStringAccumulatorClass;
-(id)getAvailableMessageBodyElement;
-(void)didFindBodyElement:(id)arg1 ;
-(void)getLevel:(long long*)arg1 quoteLevel:(long long*)arg2 forBodyNode:(id)arg3 ;
-(id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)setFoundMessageBodyElementBlock:(/*^block*/id)arg1 ;
-(void)addSubparser:(id)arg1 ;
-(void)removeSubparser:(id)arg1 ;
-(unsigned long long)quoteLevelForBodyNode:(id)arg1 ;
@end

