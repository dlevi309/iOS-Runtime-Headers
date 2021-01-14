/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_os_transaction;
@class NSObject;

@interface BLTTransaction : NSObject {

	NSObject*<OS_os_transaction> _osTransaction;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> osTransaction;              //@synthesize osTransaction=_osTransaction - In the implementation block
+(id)transactionWithDescription:(id)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(void)setOsTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSObject*<OS_os_transaction>)osTransaction;
@end

