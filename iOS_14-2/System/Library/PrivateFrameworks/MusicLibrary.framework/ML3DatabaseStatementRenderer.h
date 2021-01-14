/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@interface ML3DatabaseStatementRenderer : NSObject
+(id)defaultRenderer;
-(id)insertStatementWithOptions:(id)arg1 ;
-(id)savepointStatementWithName:(id)arg1 ;
-(id)statementWithPrefix:(id)arg1 inParameterCount:(unsigned long long)arg2 ;
-(id)insertStatementUsingDefaultValuesForTableName:(id)arg1 ;
-(id)insertStatementForTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)rollbackTranscationStatement;
-(id)commitTransactionStatement;
-(id)rollbackTranscationStatementToSavepointName:(id)arg1 ;
-(id)savepointReleaseStatementWithName:(id)arg1 ;
-(id)beginTransactionStatementWithBehaviorType:(unsigned long long)arg1 ;
@end

