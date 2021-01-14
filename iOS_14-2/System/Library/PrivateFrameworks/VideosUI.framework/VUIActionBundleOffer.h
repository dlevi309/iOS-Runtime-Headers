/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VUIAction.h>

@class NSString, NSDictionary;

@interface VUIActionBundleOffer : VUIAction {

	NSString* _offerURLString;
	NSString* _offerDomain;
	NSString* _notificationTitle;
	NSString* _notificationBundleTitle;
	NSString* _notificationBody;
	NSDictionary* _offerMetrics;

}

@property (nonatomic,retain) NSString * offerURLString;                       //@synthesize offerURLString=_offerURLString - In the implementation block
@property (nonatomic,retain) NSString * offerDomain;                          //@synthesize offerDomain=_offerDomain - In the implementation block
@property (nonatomic,retain) NSString * notificationTitle;                    //@synthesize notificationTitle=_notificationTitle - In the implementation block
@property (nonatomic,retain) NSString * notificationBundleTitle;              //@synthesize notificationBundleTitle=_notificationBundleTitle - In the implementation block
@property (nonatomic,retain) NSString * notificationBody;                     //@synthesize notificationBody=_notificationBody - In the implementation block
@property (nonatomic,retain) NSDictionary * offerMetrics;                     //@synthesize offerMetrics=_offerMetrics - In the implementation block
-(id)initWithContextData:(id)arg1 ;
-(NSString *)notificationTitle;
-(void)setNotificationTitle:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOfferURLString:(NSString *)arg1 ;
-(NSString *)offerURLString;
-(NSString *)offerDomain;
-(void)setOfferDomain:(NSString *)arg1 ;
-(NSString *)notificationBundleTitle;
-(void)setNotificationBundleTitle:(NSString *)arg1 ;
-(NSString *)notificationBody;
-(void)setNotificationBody:(NSString *)arg1 ;
-(NSDictionary *)offerMetrics;
-(void)setOfferMetrics:(NSDictionary *)arg1 ;
@end

