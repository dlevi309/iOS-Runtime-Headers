/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)entity;
-(id)fakeEntityForFetch;
-(BOOL)isReadOnly;
-(id)sqlString;
-(id)initWithEntity:(id)arg1 sqlString:(id)arg2 ;
-(void)clearCaches:(BOOL)arg1 ;
-(sqlite3_stmtRef)cachedSQLiteStatement;
-(unsigned)addBindVariable:(id)arg1 ;
-(id)initWithEntity:(id)arg1 ;
-(void)setImpossibleCondition:(BOOL)arg1 ;
-(void)setSQLString:(id)arg1 ;
-(void)setBindIntarrays:(id)arg1 ;
-(void)setBindVariables:(id)arg1 ;
-(void)cacheFakeEntityForFetch:(id)arg1 ;
-(void)setCachedStatementInfo:(NSCachedFetchRequestInfo *)arg1 ;
-(id)bindVariables;
-(BOOL)isImpossibleCondition;
-(void)setTrackChangedRowCount:(BOOL)arg1 ;
-(id)bindIntarrays;
-(void)setCachedSQLiteStatement:(sqlite3_stmtRef)arg1 forConnection:(id)arg2 ;
-(void)removeAllBindVariables;
-(unsigned)addBindIntarray:(id)arg1 ;
-(void)removeAllBindIntarrays;
-(NSCachedFetchRequestInfo *)cachedStatementInfo;
-(BOOL)trackChangedRowCount;
@end

