/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/

#import <libobjc.A.dylib/EMFIndexStrategy.h>

@class NSDictionary, NSString;

@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy> {

	NSDictionary* _termIndex;
	NSDictionary* _documentIndex;

}

@property (nonatomic,retain) NSDictionary * termIndex;                  //@synthesize termIndex=_termIndex - In the implementation block
@property (nonatomic,retain) NSDictionary * documentIndex;              //@synthesize documentIndex=_documentIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)termIndex;
-(NSDictionary *)documentIndex;
-(id)termsForDocument:(id)arg1 ;
-(id)postingsForTerm:(id)arg1 ;
-(id)commonDocumentsForTerms:(id)arg1 ;
-(id)termWeightForTerm:(id)arg1 inDocument:(id)arg2 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg1 ;
-(void)assertMethodNeedsConcreteImplementation:(SEL)arg1 ;
-(id)initWithTermIndex:(id)arg1 andDocumentIndex:(id)arg2 ;
-(void)setTermIndex:(NSDictionary *)arg1 ;
-(void)setDocumentIndex:(NSDictionary *)arg1 ;
@end

