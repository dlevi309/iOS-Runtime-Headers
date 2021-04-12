/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedRequest.h>

@class HAP2AccessoryServerEncodingThreadBTLERequest, NSString;

@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {

	BOOL _enforcePDUBodyLength;
	HAP2AccessoryServerEncodingThreadBTLERequest* _btleRequest;

}

@property (nonatomic,readonly) HAP2AccessoryServerEncodingThreadBTLERequest * btleRequest;              //@synthesize btleRequest=_btleRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)arg1 ;
+(unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)arg1 ;
-(id)serialize;
-(BOOL)isEncrypted;
-(unsigned long long)type;
-(id)initWithBTLERequest:(id)arg1 enforcePDUBodyLength:(BOOL)arg2 ;
-(HAP2AccessoryServerEncodingThreadBTLERequest *)btleRequest;
@end

