/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)parameters;
-(id)initWithStatement:(id)arg1 ;
-(BOOL)_fetchRowsIfEmpty;
-(NSString *)sql;
-(id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3 ;
-(ML3DatabaseDistantConnection *)distantConnection;
-(id)init;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(id)description;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(id)columnNameIndexMap;
-(void)_remoteEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_localEnumerateRowsWithBlock:(/*^block*/id)arg1 ;
@end

