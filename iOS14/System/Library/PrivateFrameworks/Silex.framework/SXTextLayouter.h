/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)exclusionPaths;
-(void)setExclusionPaths:(NSSet *)arg1 ;
-(void)setTextInfo:(SXTextTangierContainerInfo *)arg1 ;
-(SXTextTangierContainerInfo *)textInfo;
-(id)textLayout;
-(void)reset;
-(void)invalidate;
-(CGRect)typographicBounds;
-(CGSize)boundingSize;
-(id)wpLayout;
-(SXTextTangierDocumentRoot *)documentRoot;
-(double)calculateHeightForWidth:(double)arg1 ;
-(void)removeAllExclusionPaths;
-(void)addExclusionPath:(id)arg1 ;
-(TSDLayoutController *)layoutController;
-(SXTextSource *)textSource;
-(void)setTextSource:(SXTextSource *)arg1 ;
-(void)setDocumentRoot:(SXTextTangierDocumentRoot *)arg1 ;
-(NSArray *)paragraphRanges;
-(double)verticalLocationOfCharacterAtIndex:(unsigned long long)arg1 ;
-(id)wpStorage;
-(id)initWithTextSource:(id)arg1 andDocumentRoot:(id)arg2 ;
-(void)createTextInfoIfNeeded;
-(void)assignExclusionPaths;
-(NSRange)validAnchorRangeForRange:(NSRange)arg1 ;
-(id)exclusionPathIndexes;
-(double)baselineForLastLine;
-(id)firstColumn;
-(void)setLayoutController:(TSDLayoutController *)arg1 ;
@end

