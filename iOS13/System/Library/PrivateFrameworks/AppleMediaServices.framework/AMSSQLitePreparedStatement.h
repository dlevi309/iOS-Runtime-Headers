/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface AMSSQLitePreparedStatement : NSObject {

	const void* _connectionPointer;
	NSString* _SQL;

}

@property (nonatomic,readonly) const void* connectionPointer;              //@synthesize connectionPointer=_connectionPointer - In the implementation block
@property (setter=QL,nonatomic,copy,readonly) NSString * SQL;              //@synthesize SQL=_SQL - In the implementation block
-(NSString *)SQL;
-(id)initWithConnection:(const void*)arg1 SQL:(id)arg2 ;
-(const void*)connectionPointer;
@end

