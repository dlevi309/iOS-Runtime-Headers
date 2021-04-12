/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLSelectComponent <NSObject>
@required
-(void)groupByColumn:(id)arg1;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
-(void)addResultColumn:(id)arg1;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
-(id)join:(id)arg1 on:(id)arg2;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;

@end

