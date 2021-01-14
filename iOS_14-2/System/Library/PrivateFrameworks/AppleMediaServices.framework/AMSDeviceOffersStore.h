/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSDeviceOffersTracking.h>

@class NSDictionary, NSArray, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (nonatomic,retain) NSDictionary * deviceOfferEligibility; 
@property (nonatomic,retain) NSArray * deviceOffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)deviceOfferEligibility;
-(void)setDeviceOfferEligibility:(NSDictionary *)arg1 ;
-(NSArray *)deviceOffers;
-(void)setDeviceOffers:(NSArray *)arg1 ;
@end

