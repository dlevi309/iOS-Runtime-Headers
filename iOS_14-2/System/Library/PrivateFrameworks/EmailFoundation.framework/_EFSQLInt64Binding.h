/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@interface _EFSQLInt64Binding : EFSQLBinding {

	long long _integerValue;

}

@property (nonatomic,readonly) long long integerValue;              //@synthesize integerValue=_integerValue - In the implementation block
-(long long)integerValue;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(id)initWithInt64:(long long)arg1 ;
@end

