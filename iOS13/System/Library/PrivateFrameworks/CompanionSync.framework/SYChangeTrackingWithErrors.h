/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol SYChangeTrackingWithErrors <SYChangeTracking>
@required
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2;
-(BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4;
-(BOOL)addObject:(id)arg1 error:(id*)arg2;
-(BOOL)updateObject:(id)arg1 error:(id*)arg2;

@end

