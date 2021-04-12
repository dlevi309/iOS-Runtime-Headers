/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol OS_os_transaction;
@class NSObject;

@interface EFProcessTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;

}
+(id)log;
+(id)transactionWithDescription:(id)arg1 ;
-(BOOL)extend;
-(id)description;
-(void)invalidate;
-(id)initWithDescription:(id)arg1 ;
@end

