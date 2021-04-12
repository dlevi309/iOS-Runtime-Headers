/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassDeleteHandler <NSObject>
@optional
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2;
-(BOOL)isDeletionInProgressForPass:(id)arg1;

@required
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;

@end

