/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSCodePayload.h>

@class NFCNDEFMessage, NSString;

@interface BCSNFCCodePayload : NSObject <BCSCodePayload> {

	NFCNDEFMessage* _nfcPayload;

}

@property (nonatomic,readonly) long long codeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)codeType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNFCPayload:(id)arg1 ;
-(void)savePayloadInUserActivity:(id)arg1 ;
@end

