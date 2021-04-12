/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface CPTextLineMaker : NSObject {

	NSMutableArray* textLines;

}
-(id)textLines;
-(void)dealloc;
-(unsigned)makeTextLines:(id)arg1 ;
-(void)splitByGraphic:(id)arg1 with:(CPPDFContext*)arg2 ;
-(void)zOrderSplitLines:(id)arg1 ;
@end

