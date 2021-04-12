/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLDoubleBinding : EFSQLBinding {

	double _doubleValue;

}

@property (nonatomic,readonly) double doubleValue;              //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(id)initWithDouble:(double)arg1 ;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
@end

