/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/MFMessageBodyElement_Private.h>

@class MFMessageBodyParser, NSArray, NSString;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {

	MFMessageBodyParser* _parser;
	NSArray* _nodes;
	unsigned long long _quoteLevel;
	unsigned long long _externalRetainCount;
	int _validAttributes;
	int _attributes;

}

@property (assign,nonatomic,__weak) MFMessageBodyParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * nodes; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)reset;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(MFMessageBodyParser *)parser;
-(void)setParser:(MFMessageBodyParser *)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)releaseExternally;
-(int)valueForAttributes:(int)arg1 ;
-(unsigned long long)quoteLevel;
-(id)retainExternally;
-(BOOL)isExternallyRetained;
-(BOOL)_hasValueForAttributes:(int)arg1 ;
-(void)_setValue:(int)arg1 forAttributes:(int)arg2 ;
-(unsigned long long)getQuoteLevel;
@end

