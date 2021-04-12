/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSTLayoutDynamicResizeInfoProtocol <NSObject>
@required
-(void)invalidate;
-(BOOL)valid;
-(BOOL)hasHeightForRow:(unsigned short)arg1;
-(BOOL)hasWidthForColumn:(unsigned char)arg1;
-(double)applyResizeHeightFactor:(double)arg1;
-(double)applyResizeWidthFactor:(double)arg1;
-(double)getColumnWidth:(unsigned char)arg1;
-(double)getRowHeight:(unsigned short)arg1;
-(id)initWithMasterLayout:(id)arg1;
-(id)initWithMasterLayout:(id)arg1 columnRegion:(id)arg2;
-(id)initWithMasterLayout:(id)arg1 rowRegion:(id)arg2;
-(id)initWithDynamicResizeInfo:(id)arg1;
-(double)getRowInitialHeight:(unsigned short)arg1;
-(double)getColumnInitialWidth:(unsigned char)arg1;
-(double)getRowHeightResize:(unsigned short)arg1;
-(double)getColumnWidthResize:(unsigned char)arg1;
-(void)captureNewMinimumRowHeights:(id)arg1;

@end

