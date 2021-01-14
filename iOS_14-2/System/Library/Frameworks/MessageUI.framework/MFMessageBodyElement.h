/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) NSArray * nodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setNodes:(NSArray *)arg1 ;
-(MFMessageBodyParser *)parser;
-(NSString *)description;
-(void)reset;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)releaseExternally;
-(int)valueForAttributes:(int)arg1 ;
-(id)retainExternally;
-(BOOL)isExternallyRetained;
-(BOOL)_hasValueForAttributes:(int)arg1 ;
-(void)_setValue:(int)arg1 forAttributes:(int)arg2 ;
-(void)setParser:(MFMessageBodyParser *)arg1 ;
-(unsigned long long)getQuoteLevel;
-(NSArray *)nodes;
-(void)dealloc;
-(unsigned long long)quoteLevel;
@end

