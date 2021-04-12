/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLInt64Binding : EFSQLBinding {

	long long _integerValue;

}

@property (nonatomic,readonly) long long integerValue;              //@synthesize integerValue=_integerValue - In the implementation block
-(long long)integerValue;
-(id)initWithInt64:(long long)arg1 ;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
@end

