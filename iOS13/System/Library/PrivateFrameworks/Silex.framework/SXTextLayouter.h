/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXTextSource, NSSet, SXTextTangierDocumentRoot, TSDLayoutController, SXTextTangierContainerInfo, NSArray;

@interface SXTextLayouter : NSObject {

	SXTextSource* _textSource;
	NSSet* _exclusionPaths;
	SXTextTangierDocumentRoot* _documentRoot;
	TSDLayoutController* _layoutController;
	SXTextTangierContainerInfo* _textInfo;

}

@property (nonatomic,retain) SXTextTangierDocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,retain) SXTextSource * textSource;                             //@synthesize textSource=_textSource - In the implementation block
@property (nonatomic,retain) NSSet * exclusionPaths;                                //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
@property (nonatomic,retain) TSDLayoutController * layoutController;                //@synthesize layoutController=_layoutController - In the implementation block
@property (nonatomic,retain) SXTextTangierContainerInfo * textInfo;                 //@synthesize textInfo=_textInfo - In the implementation block
@property (nonatomic,readonly) NSArray * paragraphRanges; 
-(id)init;
-(void)invalidate;
-(void)reset;
-(CGRect)typographicBounds;
-(NSSet *)exclusionPaths;
-(void)setExclusionPaths:(NSSet *)arg1 ;
-(CGSize)boundingSize;
-(id)textLayout;
-(void)setTextInfo:(SXTextTangierContainerInfo *)arg1 ;
-(SXTextTangierContainerInfo *)textInfo;
-(SXTextTangierDocumentRoot *)documentRoot;
-(void)removeAllExclusionPaths;
-(void)addExclusionPath:(id)arg1 ;
-(TSDLayoutController *)layoutController;
-(SXTextSource *)textSource;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setDocumentRoot:(SXTextTangierDocumentRoot *)arg1 ;
-(NSArray *)paragraphRanges;
-(double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1 ;
-(id)wpStorage;
-(id)wpLayout;
-(id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2 ;
-(double)calculateHeightForWidth:(double)arg1 ;
-(void)createTextInfoIfNeeded;
-(void)assignExclusionPaths;
-(NSRange)validAnchorRangeForRange:(NSRange)arg1 ;
-(id)exclusionPathIndexes;
-(double)baselineForLastLine;
-(id)firstColumn;
-(void)setLayoutController:(TSDLayoutController *)arg1 ;
@end

