/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject {

	NSString* _requestID;
	FMFSession* _fmfSession;
	HMFTimer* _fmfSessionResponseTimer;

}

@property (nonatomic,readonly) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) FMFSession * fmfSession;                         //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fmfSessionResponseTimer;              //@synthesize fmfSessionResponseTimer=_fmfSessionResponseTimer - In the implementation block
-(id)description;
-(NSString *)requestID;
-(FMFSession *)fmfSession;
-(id)initWithResponseTimerDelegate:(id)arg1 ;
-(HMFTimer *)fmfSessionResponseTimer;
@end

