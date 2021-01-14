/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKBAutoFillTestTaggerViewDelegate <NSObject>
@optional
-(void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
-(void)taggerView:(id)arg1 willTagRequest:(id)arg2;
-(long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
-(void)taggerViewDidFinish:(id)arg1;
-(long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;

@end

