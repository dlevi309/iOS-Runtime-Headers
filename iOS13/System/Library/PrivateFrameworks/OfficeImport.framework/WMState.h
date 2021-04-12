/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CMState.h>

@class CMOutlineState, NSMutableDictionary, WDText, WDParagraph;

@interface WMState : CMState {

	CMOutlineState* currentListState;
	CMOutlineState* outlineState;
	NSMutableDictionary* listStates;
	WDText* mLastHeader;
	WDText* mLastFooter;
	unsigned mCurrentPage;
	unsigned long long mBlockIndex;
	unsigned long long mRunIndex;
	float mTopMargin;
	float mLeftMargin;
	float mPageHeight;
	BOOL mIsFrame;
	BOOL mIsFrameStart;
	BOOL mIsFrameEnd;
	BOOL mIsHeaderOrFooter;
	float mTotalPageHeight;
	WDParagraph* _currentParagraph;

}

@property (retain) WDParagraph * currentParagraph;              //@synthesize currentParagraph=_currentParagraph - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(float)topMargin;
-(void)setCurrentPage:(unsigned)arg1 ;
-(unsigned)currentPage;
-(float)pageOffset;
-(void)setPageHeight:(float)arg1 ;
-(float)pageHeight;
-(float)leftMargin;
-(BOOL)isFrame;
-(BOOL)isHeaderOrFooter;
-(float)totalPageHeight;
-(void)setTotalPageHeight:(float)arg1 ;
-(unsigned long long)runIndex;
-(WDParagraph *)currentParagraph;
-(void)setCurrentParagraph:(WDParagraph *)arg1 ;
-(void)setRunIndex:(unsigned long long)arg1 ;
-(BOOL)isCurrentListDefinitionId:(int)arg1 ;
-(id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2 ;
-(void)setCurrentListState:(id)arg1 ;
-(id)currentListState;
-(void)setBlockIndex:(unsigned long long)arg1 ;
-(unsigned long long)blockIndex;
-(void)setIsFrame:(BOOL)arg1 ;
-(void)setIsFrameStart:(BOOL)arg1 ;
-(void)setIsFrameEnd:(BOOL)arg1 ;
-(BOOL)isFrameEnd;
-(BOOL)isFrameStart;
-(void)setLastHeader:(id)arg1 ;
-(id)lastHeader;
-(void)setIsHeaderOrFooter:(BOOL)arg1 ;
-(void)setLastFooter:(id)arg1 ;
-(id)lastFooter;
-(void)clearCurrentListState;
-(BOOL)isCurrentListStateOverridden;
-(id)listStateForListDefinitionId:(int)arg1 ;
-(void)setListState:(id)arg1 forListDefinitionId:(int)arg2 ;
-(id)outlineState;
@end

