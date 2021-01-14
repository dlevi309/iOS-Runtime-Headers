/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)paneState;
-(void)setPaneState:(int)arg1 ;
-(void)setActivePane:(int)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setTopLeftCell:(id)arg1 ;
-(int)activePane;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
@end

