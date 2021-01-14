/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol IKAppNavigationController <NSObject>
@optional
-(void)clear;
-(void)dismissModal;
-(void)setDocuments:(id)arg1 options:(id)arg2;
-(void)presentModal:(id)arg1 options:(id)arg2;

@required
-(id)documents;
-(void)removeDocument:(id)arg1;
-(void)popToDocument:(id)arg1;
-(void)pushDocument:(id)arg1 options:(id)arg2;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
-(void)popDocument;
-(void)popToRootDocument;

@end

