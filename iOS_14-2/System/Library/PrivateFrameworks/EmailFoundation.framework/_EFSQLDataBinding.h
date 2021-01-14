/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding {

	NSData* _dataValue;

}

@property (nonatomic,copy,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(NSData *)dataValue;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
-(id)initWithData:(id)arg1 ;
@end

