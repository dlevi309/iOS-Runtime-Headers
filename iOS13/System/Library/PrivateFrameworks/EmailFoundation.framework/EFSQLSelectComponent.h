/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLSelectComponent <NSObject>
@required
-(void)addResultColumn:(id)arg1;
-(id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
-(id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
-(id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
-(id)join:(id)arg1 on:(id)arg2;
-(id)leftOuterJoin:(id)arg1 on:(id)arg2;
-(id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
-(id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
-(void)groupByColumn:(id)arg1;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2;

@end

