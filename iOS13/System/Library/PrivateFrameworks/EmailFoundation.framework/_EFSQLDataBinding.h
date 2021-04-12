/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <EmailFoundation/EFSQLBinding.h>

@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding {

	NSData* _dataValue;

}

@property (nonatomic,copy,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)dataValue;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
@end

