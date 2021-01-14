/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

