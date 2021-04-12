/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSDeviceOffersTracking.h>

@class NSDictionary, NSArray, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * deviceOfferEligibility; 
@property (nonatomic,retain) NSArray * deviceOffers; 
-(NSDictionary *)deviceOfferEligibility;
-(void)setDeviceOfferEligibility:(NSDictionary *)arg1 ;
-(NSArray *)deviceOffers;
-(void)setDeviceOffers:(NSArray *)arg1 ;
@end

