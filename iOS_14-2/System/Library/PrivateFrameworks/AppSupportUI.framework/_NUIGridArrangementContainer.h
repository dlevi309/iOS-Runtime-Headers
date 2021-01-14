/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


@protocol _NUIGridArrangementContainer <NUIArrangementContainer>
@optional
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@required
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1;

@end

