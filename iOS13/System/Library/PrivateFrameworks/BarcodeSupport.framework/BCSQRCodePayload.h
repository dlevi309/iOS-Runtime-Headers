/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSCodePayload.h>

@class CIBarcodeDescriptor, NSString;

@interface BCSQRCodePayload : NSObject <BCSCodePayload> {

	CIBarcodeDescriptor* _barcodeDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long codeType; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)codeType;
-(id)initWithBarcodeDescriptor:(id)arg1 ;
-(void)savePayloadInUserActivity:(id)arg1 ;
@end

