/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PDFPageLabelViewPrivate;

@interface PDFPageLabelView : UIView {

	PDFPageLabelViewPrivate* _private;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCurrentPageNumber:(unsigned long long)arg1 forPageCount:(unsigned long long)arg2 ;
-(void)updateEffect;
-(void)_startFade;
@end

