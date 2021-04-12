/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class SBKTransaction;

@interface SBKRequestData : NSObject {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)propertyListBodyWithTransaction:(id)arg1 ;
-(SBKTransaction *)transaction;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(id)serializableRequestBodyPropertyList;
@end

