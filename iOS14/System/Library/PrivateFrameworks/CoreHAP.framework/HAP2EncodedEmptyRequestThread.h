/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedRequest.h>

@class NSString;

@interface HAP2EncodedEmptyRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {

	unsigned long long _requestType;

}

@property (nonatomic,readonly) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serialize;
-(id)body;
-(unsigned long long)requestType;
-(BOOL)isEncrypted;
-(unsigned long long)type;
-(id)initWithRequestType:(unsigned long long)arg1 ;
@end

