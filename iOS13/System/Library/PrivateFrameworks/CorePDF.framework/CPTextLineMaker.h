/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface CPTextLineMaker : NSObject {

	NSMutableArray* textLines;

}
-(void)dealloc;
-(id)textLines;
-(unsigned)makeTextLines:(id)arg1 ;
-(void)splitByGraphic:(id)arg1 with:(CPPDFContext*)arg2 ;
-(void)zOrderSplitLines:(id)arg1 ;
@end

