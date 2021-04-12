/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassDeleteHandler <NSObject>
@optional
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2;
-(BOOL)isDeletionInProgressForPass:(id)arg1;

@required
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;

@end

