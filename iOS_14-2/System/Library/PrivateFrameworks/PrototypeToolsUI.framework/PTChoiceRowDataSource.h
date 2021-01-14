/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/


@protocol PTChoiceRowDataSource <NSObject>
@required
-(long long)numberOfSectionsForChoiceRow:(id)arg1;
-(id)choiceRow:(id)arg1 titleForSection:(long long)arg2;
-(long long)choiceRow:(id)arg1 numberOfRowsInSection:(long long)arg2;
-(id)choiceRow:(id)arg1 valueForRow:(long long)arg2 inSection:(long long)arg3;
-(id)choiceRow:(id)arg1 titleForRow:(long long)arg2 inSection:(long long)arg3;
-(id)choiceRow:(id)arg1 shortTitleForRow:(long long)arg2 inSection:(long long)arg3;

@end

