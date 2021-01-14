/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PKPassBarcodeSettings : NSObject <NSSecureCoding> {

	long long _initialBarcodeFetchCount;
	NSURL* _barcodeServiceURL;

}

@property (nonatomic,readonly) long long initialBarcodeFetchCount;              //@synthesize initialBarcodeFetchCount=_initialBarcodeFetchCount - In the implementation block
@property (nonatomic,readonly) NSURL * barcodeServiceURL;                       //@synthesize barcodeServiceURL=_barcodeServiceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)initialBarcodeFetchCount;
-(NSURL *)barcodeServiceURL;
-(id)initWithCoder:(id)arg1 ;
@end

