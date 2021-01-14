/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

