/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSString;

@interface ADAMSBagManager : ADSingleton <AMSBagConsumer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)sharedInstance;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1 ;
-(BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
-(BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
-(BOOL)authenticateAccountThroughAMSOperation:(id)arg1 ;
@end

