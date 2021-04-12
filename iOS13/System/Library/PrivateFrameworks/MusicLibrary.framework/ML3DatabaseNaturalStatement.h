/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(void)setSql:(NSString *)arg1 ;
-(id)initWithSQL:(id)arg1 parameters:(id)arg2 ;
@end

