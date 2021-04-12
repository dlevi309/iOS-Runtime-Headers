/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class SBKTransaction;

@interface SBKRequestData : NSObject {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)propertyListBodyWithTransaction:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(SBKTransaction *)transaction;
-(id)serializableRequestBodyPropertyList;
@end

