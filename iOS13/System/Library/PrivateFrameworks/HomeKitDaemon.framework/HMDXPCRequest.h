/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)qualityOfService;
-(id)responseHandler;
-(NSDate *)startTime;
-(NSString *)messageName;
-(id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

