/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDReference;

@interface EDPane : NSObject {

	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
	int mPaneState;

}
+(id)pane;
-(id)init;
-(id)description;
-(int)activePane;
-(void)setActivePane:(int)arg1 ;
-(int)paneState;
-(void)setPaneState:(int)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setTopLeftCell:(id)arg1 ;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
@end

