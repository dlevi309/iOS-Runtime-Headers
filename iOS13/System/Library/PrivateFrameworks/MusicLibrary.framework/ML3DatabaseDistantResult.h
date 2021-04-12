/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseResult.h>

@class NSArray, NSDictionary, ML3DatabaseDistantConnection, NSString;

@interface ML3DatabaseDistantResult : ML3DatabaseResult {

	NSArray* _cachedRows;
	NSDictionary* _cachedColumnNameIndexMap;
	ML3DatabaseDistantConnection* _distantConnection;
	NSString* _sql;
	NSArray* _parameters;

}

@property (nonatomic,readonly) ML3DatabaseDistantConnection * distantConnection;              //@synthesize distantConnection=_distantConnection - In the implementation block
@property (nonatomic,readonly) NSString * sql;                                                //@synthesize sql=_sql - In the implementation block
@property (nonatomic,readonly) NSArray * parameters;                                          //@synthesize parameters=_parameters - In the implementation block
-(id)init;
-(id)description;
-(NSArray *)parameters;
-(id)initWithStatement:(id)arg1 ;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)sql;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3 ;
-(void)_localEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_remoteEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_fetchRowsIfEmpty;
-(ML3DatabaseDistantConnection *)distantConnection;
@end

