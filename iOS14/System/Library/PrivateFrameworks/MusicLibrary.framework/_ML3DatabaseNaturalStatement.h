/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,retain) NSString * sql;                           //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(id)init;
-(void)setSql:(NSString *)arg1 ;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
@end

