/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol OS_os_transaction;
@class NSObject;

@interface EFProcessTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;

}
+(id)log;
+(id)transactionWithDescription:(id)arg1 ;
-(id)description;
-(void)invalidate;
-(id)initWithDescription:(id)arg1 ;
-(BOOL)extend;
@end

