/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

