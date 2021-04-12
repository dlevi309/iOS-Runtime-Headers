/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIHNodeInfo : NSObject {

	int mTreeDepth;
	int mRow;
	ODIHRange mXRange;
	BOOL mConnectToVerticalSide;
	int mExtraRowsBetweenParentAndSelf;
	float mXOffsetRelativeToParent;
	ODIHRangeVector* mXRanges;

}
-(id)init;
-(void)dealloc;
-(int)row;
-(void)setRow:(int)arg1 ;
-(ODIHRange)xRange;
-(void)setXRange:(ODIHRange)arg1 ;
-(int)treeDepth;
-(void)setTreeDepth:(int)arg1 ;
-(BOOL)connectToVerticalSide;
-(void)setConnectToVerticalSide:(BOOL)arg1 ;
-(int)extraRowsBetweenParentAndSelf;
-(void)setExtraRowsBetweenParentAndSelf:(int)arg1 ;
-(float)xOffsetRelativeToParent;
-(void)setXOffsetRelativeToParent:(float)arg1 ;
-(void)addToXOffsetRelativeToParent:(float)arg1 ;
-(ODIHRangeVector*)xRanges;
@end

