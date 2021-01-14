/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PSITableDelegate
@required
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(void)unprepareMatchingIds;
-(void)executeStatement:(id)arg1;
-(long long)lastInsertedRowID;
-(void)executeStatementFromString:(id)arg1;
-(void)bindMatchingIds:(const CFSetRef)arg1;
-(id)statementFromString:(id)arg1;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(void)bindMatchingIds:(const CFArrayRef)arg1 range:(NSRange)arg2;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
-(void)unbindMatchingIds;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2;

@end

