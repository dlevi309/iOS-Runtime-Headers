/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>
@optional
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;
-(void)taggerViewDidFinish:(id)arg1;

@end

