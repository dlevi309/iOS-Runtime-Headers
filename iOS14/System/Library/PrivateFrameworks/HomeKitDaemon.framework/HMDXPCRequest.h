/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject {

	NSDate* _startTime;
	NSString* _messageName;
	long long _qualityOfService;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * messageName;               //@synthesize messageName=_messageName - In the implementation block
@property (readonly) long long qualityOfService;                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSString *)messageName;
-(id)responseHandler;
-(long long)qualityOfService;
-(NSDate *)startTime;
-(id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

