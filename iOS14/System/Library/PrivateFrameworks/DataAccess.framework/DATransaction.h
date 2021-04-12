/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface DATransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _label;
	NSString* _transactionId;

}

@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * transactionId;              //@synthesize transactionId=_transactionId - In the implementation block
-(id)init;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)transactionId;
-(NSString *)label;
-(void)dealloc;
@end

