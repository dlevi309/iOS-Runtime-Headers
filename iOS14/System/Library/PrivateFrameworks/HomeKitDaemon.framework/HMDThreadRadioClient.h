/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDThreadRadioClient.h>

@protocol HMDThreadRadioClient <NSObject>
@required
-(void)startThreadNetwork:(id)arg1 completion:(/*^block*/id)arg2;
-(void)stopThreadNetworkWithCompletion:(/*^block*/id)arg1;

@end


@class NSString;

@interface HMDThreadRadioClient : HMFObject <HMDThreadRadioClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startThreadNetwork:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopThreadNetworkWithCompletion:(/*^block*/id)arg1 ;
@end

