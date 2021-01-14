/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/


@class APMescalSigningRequestor;

@interface APMescalSigning : NSObject {

	APMescalSigningRequestor* _requesterObject;

}

@property (nonatomic,readonly) APMescalSigningRequestor * requesterObject;              //@synthesize requesterObject=_requesterObject - In the implementation block
-(id)init;
-(id)signatureForData:(id)arg1 ;
-(void)signatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(APMescalSigningRequestor *)requesterObject;
-(void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

