/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPaymentTransaction;

@interface PKCloudRecordTransaction : PKCloudRecordObject {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dateFormatter;
-(long long)compare:(id)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(PKPaymentTransaction *)transaction;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)description;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

