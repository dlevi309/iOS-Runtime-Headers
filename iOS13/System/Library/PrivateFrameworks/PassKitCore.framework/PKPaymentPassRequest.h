/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(NSString *)passTypeID;
-(void)setPassTypeID:(NSString *)arg1 ;
@end

