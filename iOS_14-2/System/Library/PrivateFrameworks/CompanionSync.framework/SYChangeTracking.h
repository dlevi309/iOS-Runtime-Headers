/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol SYChangeTracking <NSObject>
@required
-(void)deleteObject:(id)arg1;
-(void)addObject:(id)arg1;
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

