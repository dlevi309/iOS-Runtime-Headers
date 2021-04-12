/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2 ;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1 ;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatement;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
@end

