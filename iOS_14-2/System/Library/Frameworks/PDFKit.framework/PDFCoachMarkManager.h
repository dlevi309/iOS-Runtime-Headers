/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFCoachMarkManagerPrivate;

@interface PDFCoachMarkManager : NSObject {

	PDFCoachMarkManagerPrivate* _private;

}
-(void)_cleanCoachMarks;
-(id)_pageLayerForPage:(id)arg1 ;
-(id)initWithPDFRenderingProperties:(id)arg1 ;
-(void)createCoachMarkForPage:(id)arg1 atFrame:(CGRect)arg2 ;
-(void)pageLayerDidAppear:(id)arg1 ;
-(void)pageLayerWillRemove:(id)arg1 ;
@end

