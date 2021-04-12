/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol SYChangeTracking <NSObject>
@required
-(void)addObject:(id)arg1;
-(void)deleteObject:(id)arg1;
-(void)updateObject:(id)arg1;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)addObject:(id)arg1 context:(id)arg2;
-(void)updateObject:(id)arg1 context:(id)arg2;
-(void)deleteObject:(id)arg1 context:(id)arg2;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2;

@end

