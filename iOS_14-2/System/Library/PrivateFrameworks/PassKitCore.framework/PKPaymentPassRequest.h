/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest {

	NSString* _passTypeID;
	NSString* _serialNumber;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSString *)serialNumber;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(NSString *)passTypeID;
-(void)setPassTypeID:(NSString *)arg1 ;
@end

