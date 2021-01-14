/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLDoubleBinding : EFSQLBinding {

	double _doubleValue;

}

@property (nonatomic,readonly) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(id)initWithDouble:(double)arg1 ;
@end

