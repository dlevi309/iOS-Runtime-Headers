/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSMutableArray, NSString, NSCachedFetchRequestInfo;

@interface NSSQLiteStatement : NSObject {

	NSSQLEntity* _entity;
	NSMutableArray* _bindVariables;
	NSMutableArray* _bindIntarrays;
	NSString* _sqlString;
	BOOL _isImpossibleCondition;
	BOOL _trackChangedRowCount;
	NSSQLEntity* _fakeEntityForFetch;
	NSCachedFetchRequestInfo* _cachedStatementInfo;
	sqlite3_stmtRef _cachedSQLiteStatement;
	void* _owner;

}

@property (nonatomic,retain) NSCachedFetchRequestInfo * cachedStatementInfo;              //@synthesize cachedStatementInfo=_cachedStatementInfo - In the implementation block
@property (assign,nonatomic) BOOL trackChangedRowCount;                                   //@synthesize trackChangedRowCount=_trackChangedRowCount - In the implementation block
-(id)initWithEntity:(id)arg1 ;
-(id)fakeEntityForFetch;
-(id)entity;
-(BOOL)isReadOnly;
-(void)removeAllBindVariables;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setBindVariables:(id)arg1 ;
-(BOOL)trackChangedRowCount;
-(id)sqlString;
-(void)setTrackChangedRowCount:(BOOL)arg1 ;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(id)bindIntarrays;
-(void)setSQLString:(id)arg1 ;
-(id)description;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(unsigned)addBindIntarray:(id)arg1 ;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)clearCaches:(BOOL)arg1 ;
-(unsigned)addBindVariable:(id)arg1 ;
-(void)setImpossibleCondition:(BOOL)arg1 ;
-(void)removeAllBindIntarrays;
-(BOOL)isImpossibleCondition;
-(void)setBindIntarrays:(id)arg1 ;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 forConnection:(id)arg2 ;
-(void)dealloc;
-(id)bindVariables;
@end

