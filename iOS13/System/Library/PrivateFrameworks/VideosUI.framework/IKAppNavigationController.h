/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol IKAppNavigationController <NSObject>
@optional
-(void)clear;
-(void)dismissModal;
-(void)setDocuments:(id)arg1 options:(id)arg2;
-(void)presentModal:(id)arg1 options:(id)arg2;

@required
-(void)pushDocument:(id)arg1 options:(id)arg2;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1;
-(id)documents;

@end

