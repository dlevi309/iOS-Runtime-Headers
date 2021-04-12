/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
@optional
-(void)textFieldListValidityDidChange:(id)arg1;
-(void)textFieldListValuesDidChange:(id)arg1;

@required
-(long long)numberOfColumnsInTextFieldList:(id)arg1;
-(long long)numberOfFieldsInTextFieldList:(id)arg1;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@end

