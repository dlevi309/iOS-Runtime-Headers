/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@protocol _CDContextPersisting
@required
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)saveRegistration:(id)arg1;
-(void)deleteRegistration:(id)arg1;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1;

@end

