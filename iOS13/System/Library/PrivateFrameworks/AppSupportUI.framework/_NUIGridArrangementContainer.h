/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
@optional
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@required
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3;

@end

