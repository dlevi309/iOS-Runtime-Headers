/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>

@interface APMescalSigningRequestor : APXPCActionRequester
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInvalidated;
-(id)init;
-(id)remoteObjectInterface;
-(id)signatureForData:(id)arg1 ;
-(void)connectionInterrupted;
-(void)signatureForData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

