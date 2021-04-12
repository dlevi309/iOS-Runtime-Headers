/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaBrowserDataSource.h>
@class NSString, HMFSystemInfo;


@protocol HMDMediaBrowserDataSource
@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) BOOL requiresHomePodPairing; 
@property (readonly) HMFSystemInfo * systemInfo; 
@required
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(BOOL)requiresHomePodPairing;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
-(id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
-(NSString *)currentAccessoryMediaRouteIdentifier;

@end


@class NSString, HMFSystemInfo;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) BOOL requiresHomePodPairing; 
@property (readonly) HMFSystemInfo * systemInfo; 
+(id)shortDescription;
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(BOOL)requiresHomePodPairing;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(NSString *)currentAccessoryMediaRouteIdentifier;
@end

