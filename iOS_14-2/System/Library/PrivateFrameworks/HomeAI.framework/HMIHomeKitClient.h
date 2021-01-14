/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSOperationQueue, NSString;

@interface HMIHomeKitClient : HMFObject <HMFLogging> {

	BOOL _setup;
	NSArray* _homes;
	NSOperationQueue* _homeKitOperationQueue;
	unsigned long long _cachePolicy;

}

@property (readonly) NSOperationQueue * homeKitOperationQueue;              //@synthesize homeKitOperationQueue=_homeKitOperationQueue - In the implementation block
@property (getter=isSetup,readonly) BOOL setup;                             //@synthesize setup=_setup - In the implementation block
@property (readonly) unsigned long long cachePolicy;                        //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (readonly) NSArray * homes;                                       //@synthesize homes=_homes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)setup;
-(id)init;
-(BOOL)isSetup;
-(unsigned long long)cachePolicy;
-(NSArray *)homes;
-(BOOL)isCurrentDevicePrimaryResident;
-(id)initWithCachePolicy:(unsigned long long)arg1 ;
-(NSOperationQueue *)homeKitOperationQueue;
-(id)initWithNoCaching;
-(id)homePersonManagerForHomeUUID:(id)arg1 ;
-(id)homeForHMPersonManagerUUID:(id)arg1 ;
-(id)homePersonManagersForCurrentDevice;
-(id)photosPersonManagerForHomeUUID:(id)arg1 sourceUUID:(id)arg2 ;
-(id)cameraProfileWithUUID:(id)arg1 ;
-(id)homeWithCameraProfileUUID:(id)arg1 ;
@end

