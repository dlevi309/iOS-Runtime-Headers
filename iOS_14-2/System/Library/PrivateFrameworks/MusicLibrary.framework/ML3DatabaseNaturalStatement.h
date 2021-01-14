/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding> {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,copy) NSString * sql;                             //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSql:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(id)initWithSQL:(id)arg1 parameters:(id)arg2 ;
@end

