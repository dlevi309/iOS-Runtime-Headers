/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableArray;

@interface TITokenizationRevision : NSObject {

	unsigned long long _revisedDocumentLocation;
	unsigned long long _branchedTokenIndex;
	unsigned long long _mergedTokenIndex;
	NSMutableArray* _branchTokens;
	NSRange _originalSelectedTokenRange;
	TIRevisionHistoryTokenIterator _originalIterator;

}

@property (assign,nonatomic) NSRange originalSelectedTokenRange;                           //@synthesize originalSelectedTokenRange=_originalSelectedTokenRange - In the implementation block
@property (assign,nonatomic) TIRevisionHistoryTokenIterator originalIterator;              //@synthesize originalIterator=_originalIterator - In the implementation block
@property (assign,nonatomic) unsigned long long revisedDocumentLocation;                   //@synthesize revisedDocumentLocation=_revisedDocumentLocation - In the implementation block
@property (assign,nonatomic) unsigned long long branchedTokenIndex;                        //@synthesize branchedTokenIndex=_branchedTokenIndex - In the implementation block
@property (assign,nonatomic) unsigned long long mergedTokenIndex;                          //@synthesize mergedTokenIndex=_mergedTokenIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * branchTokens;                              //@synthesize branchTokens=_branchTokens - In the implementation block
-(id)init;
-(id)initWithTokenIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(NSRange)originalSelectedTokenRange;
-(void)setOriginalSelectedTokenRange:(NSRange)arg1 ;
-(TIRevisionHistoryTokenIterator)originalIterator;
-(void)setOriginalIterator:(TIRevisionHistoryTokenIterator)arg1 ;
-(unsigned long long)revisedDocumentLocation;
-(void)setRevisedDocumentLocation:(unsigned long long)arg1 ;
-(unsigned long long)branchedTokenIndex;
-(void)setBranchedTokenIndex:(unsigned long long)arg1 ;
-(unsigned long long)mergedTokenIndex;
-(void)setMergedTokenIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)branchTokens;
@end

