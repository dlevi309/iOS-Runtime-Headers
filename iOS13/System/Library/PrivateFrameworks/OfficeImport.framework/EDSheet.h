/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCDDelayedNode.h>

@class EDString, EDColorReference, EDHeaderFooter, EDPageSetup, NSMutableArray, OITSUPointerKeyDictionary, EDProcessors, EDWarnings, ESDContainer, EDWorkbook;

@interface EDSheet : OCDDelayedNode {

	EDString* mName;
	BOOL mHidden;
	BOOL mDisplayFormulas;
	BOOL mDisplayGridlines;
	BOOL mIsDialogSheet;
	EDColorReference* mDefaultGridlineColorReference;
	EDHeaderFooter* mHeaderFooter;
	EDPageSetup* mPageSetup;
	NSMutableArray* mDrawables;
	OITSUPointerKeyDictionary* mTextBoxMap;
	OITSUPointerKeyDictionary* mCommentMap;
	EDProcessors* mProcessors;
	EDWarnings* mWarnings;
	ESDContainer* mEscherDrawing;
	EDWorkbook* mWorkbook;

}

@property (assign,nonatomic) BOOL isDialogSheet; 
@property (__weak,readonly) EDWorkbook * workbook; 
+(id)sheetWithWorkbook:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(BOOL)isHidden;
-(void)teardown;
-(void)setHidden:(BOOL)arg1 ;
-(id)warnings;
-(void)setup;
-(unsigned long long)commentCount;
-(id)processors;
-(id)drawables;
-(id)drawableAtIndex:(unsigned long long)arg1 ;
-(EDWorkbook *)workbook;
-(unsigned long long)drawableCount;
-(BOOL)isDisplayGridlines;
-(void)addDrawable:(id)arg1 ;
-(void)applyProcessors;
-(id)initWithWorkbook:(id)arg1 ;
-(void)setIsDialogSheet:(BOOL)arg1 ;
-(void)setDisplayFormulas:(BOOL)arg1 ;
-(void)setDisplayGridlines:(BOOL)arg1 ;
-(void)setDefaultGridlineColorReference:(id)arg1 ;
-(BOOL)isDisplayFormulas;
-(id)headerFooter;
-(void)doneWithNonRowContent;
-(id)defaultGridlineColor;
-(void)setDefaultGridlineColor:(id)arg1 ;
-(void)setHeaderFooter:(id)arg1 ;
-(id)pageSetup;
-(void)setPageSetup:(id)arg1 ;
-(void)removeDrawableAtIndex:(unsigned long long)arg1 ;
-(id)edTextBoxForShape:(id)arg1 ;
-(void)setEDTextBox:(id)arg1 forShape:(id)arg2 ;
-(id)edCommentForShape:(id)arg1 ;
-(void)setEDComment:(id)arg1 forShape:(id)arg2 ;
-(BOOL)isDialogSheet;
-(void)reduceMemoryIfPossible;
-(id)escherDrawing;
-(void)setEscherDrawing:(id)arg1 ;
-(id)defaultGridlineColorReference;
-(id)drawableEnumerator;
@end

