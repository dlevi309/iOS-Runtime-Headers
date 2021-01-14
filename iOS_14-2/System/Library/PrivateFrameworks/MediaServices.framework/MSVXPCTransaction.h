/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_os_transaction;
@class NSUUID, NSObject, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSObject*<OS_os_transaction> _transaction;
	long long _transactionCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)endTransaction;
-(void)beginTransaction;
-(void)endTransactionOnDate:(id)arg1 ;
-(BOOL)isActive;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
@end

