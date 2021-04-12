/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol MarkupViewControllerDelegate <NSObject>
@optional
-(UIEdgeInsets*)customEdgeInsets;
-(id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
-(BOOL)controller:(id)arg1 shouldOpenLinkAtURL:(id)arg2;
-(void)controllerWantsToShowShareSheet:(id)arg1;
-(void)controller:(id)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
-(void)controller:(id)arg1 didReadCGPDFDocument:(CGPDFDocumentRef)arg2;
-(void)controller:(id)arg1 willWriteCGPDFDocument:(CGPDFDocumentRef)arg2 toContext:(CGContextRef)arg3;
-(UIEdgeInsets*)customSketchOverlayInsets;

@end

