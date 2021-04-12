/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface MROSTransaction : NSObject {

	NSObject*<OS_os_transaction> _containedTransaction;
	NSString* _transactionName;

}

@property (nonatomic,readonly) NSString * transactionName;              //@synthesize transactionName=_transactionName - In the implementation block
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)invalidateTransaction;
-(NSString *)transactionName;
@end

