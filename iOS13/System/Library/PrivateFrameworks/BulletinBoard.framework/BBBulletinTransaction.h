/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSString;

@interface BBBulletinTransaction : NSObject {

	NSString* _bulletinID;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) NSString * bulletinID;                    //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
+(id)transactionWithBulletinID:(id)arg1 ;
-(id)description;
-(unsigned long long)transactionID;
-(NSString *)bulletinID;
-(unsigned long long)incrementTransactionID;
-(id)initWithBulletinID:(id)arg1 ;
@end

