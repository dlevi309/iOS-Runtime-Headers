/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString;

@interface FCBundleEntitlementsProviderResult : NSObject {

	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;

}

@property (nonatomic,readonly) NSString * bundlePurchaseID;              //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (nonatomic,readonly) BOOL inTrialPeriod;                       //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (nonatomic,readonly) BOOL isPurchaser;                         //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL isAmplifyUser;                       //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPurchaser;
-(NSString *)bundlePurchaseID;
-(BOOL)inTrialPeriod;
-(BOOL)isAmplifyUser;
-(id)initWithBundlePurchaseID:(id)arg1 inTrialPeriod:(BOOL)arg2 isPurchaser:(BOOL)arg3 isAmplifyUser:(BOOL)arg4 ;
@end

