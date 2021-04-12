/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString;

@interface FCBundleEntitlementsProviderResult : NSObject {

	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;
	NSString* _servicesBundlePurchaseID;

}

@property (nonatomic,readonly) NSString * bundlePurchaseID;                      //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (nonatomic,readonly) NSString * servicesBundlePurchaseID;              //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (nonatomic,readonly) BOOL inTrialPeriod;                               //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                                 //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL isAmplifyUser;                               //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(BOOL)isPurchaser;
-(NSString *)servicesBundlePurchaseID;
-(id)initWithBundlePurchaseID:(id)arg1 inTrialPeriod:(BOOL)arg2 isPurchaser:(BOOL)arg3 servicesBundlePurchaseID:(id)arg4 isAmplifyUser:(BOOL)arg5 ;
-(NSString *)bundlePurchaseID;
-(BOOL)inTrialPeriod;
-(BOOL)isAmplifyUser;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

