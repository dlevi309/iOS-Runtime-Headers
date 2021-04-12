/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedInstance;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(id)retrieveJingleRequestURLFromAMSBagWithPartialityKey:(id)arg1 ;
-(BOOL)retrieveIsSponsoredAdsEnabledValueFromAMSBag;
-(BOOL)retrieveIsSponsoredAdsEnabledValueForAdTrackingdFromAMSBag;
-(BOOL)authenticateAccountThroughAMSOperation:(id)arg1 ;
@end

