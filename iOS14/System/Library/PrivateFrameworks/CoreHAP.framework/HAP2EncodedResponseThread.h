/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedResponse.h>

@class HAPBTLEResponse, NSString;

@interface HAP2EncodedResponseThread : HAP2LoggingObject <HAP2EncodedResponse> {

	HAPBTLEResponse* _btleResponse;

}

@property (nonatomic,readonly) HAPBTLEResponse * btleResponse;                 //@synthesize btleResponse=_btleResponse - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEncrypted;
-(id)initWithBTLEResponse:(id)arg1 ;
-(HAPBTLEResponse *)btleResponse;
@end

