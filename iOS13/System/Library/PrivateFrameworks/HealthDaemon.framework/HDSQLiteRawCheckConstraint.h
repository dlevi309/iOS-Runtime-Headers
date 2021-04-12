/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSQLiteCheckConstraint.h>

@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {

	NSString* __rawSQL;

}

@property (nonatomic,copy,readonly) NSString * _rawSQL;              //@synthesize _rawSQL=__rawSQL - In the implementation block
+(id)checkConstraintWithSQL:(id)arg1 ;
-(id)SQLCheckConstraint;
-(id)_initWithSQL:(id)arg1 ;
-(NSString *)_rawSQL;
@end

