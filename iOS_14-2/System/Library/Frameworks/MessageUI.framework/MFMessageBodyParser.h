/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)parse;
-(id)init;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)copyBlocks;
-(void)enqueueParagraphNode:(id)arg1 withTagName:(id)arg2 ;
-(void)flushParagraphNodes;
-(void)willBeginParsing;
-(BOOL)shouldProceedParsing;
-(BOOL)isLandmarkTagName:(id)arg1 ;
-(void)didFindError:(id)arg1 ;
-(id)parserError;
-(BOOL)shouldIgnoreTagWithTagName:(id)arg1 ;
-(void)didFinishParsing;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(Class)messageBodyStringAccumulatorClass;
-(id)getAvailableMessageBodyElement;
-(void)didFindBodyElement:(id)arg1 ;
-(void)getLevel:(long long*)arg1 quoteLevel:(long long*)arg2 forBodyNode:(id)arg3 ;
-(id)newStringAccumulatorWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2 ;
-(void)setFoundMessageBodyElementBlock:(/*^block*/id)arg1 ;
-(void)addSubparser:(id)arg1 ;
-(void)removeSubparser:(id)arg1 ;
-(unsigned long long)quoteLevelForBodyNode:(id)arg1 ;
-(void)dealloc;
@end

