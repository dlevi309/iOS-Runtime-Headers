/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol AnalyticsWorkspaceHealthDelegate <NSObject>
@optional
-(void)destroyPersistentStoreStarted;
-(void)integrityCheckCompleted:(BOOL)arg1 error:(id)arg2;
-(void)destroyPersistentStoreCompleted:(BOOL)arg1 error:(id)arg2;
-(void)integrityCheckStarted;
-(void)deleteDatabaseCompleted:(BOOL)arg1 error:(id)arg2;
-(void)deleteDatabaseStarted;

@end

