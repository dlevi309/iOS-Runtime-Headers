/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PSITableDelegate
@required
-(void)executeStatement:(id)arg1;
-(long long)lastInsertedRowID;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(id)statementFromString:(id)arg1;
-(void)executeStatementFromString:(id)arg1;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
-(void)unprepareMatchingIds;
-(void)bindMatchingIds:(const CFSetRef)arg1;
-(void)bindMatchingIds:(const CFArrayRef)arg1 range:(NSRange)arg2;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2;
-(void)unbindMatchingIds;

@end

