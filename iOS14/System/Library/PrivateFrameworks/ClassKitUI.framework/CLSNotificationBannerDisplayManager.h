/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
*/


@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject {

	NSDate* _lastBannerTime;

}

@property (nonatomic,retain) NSDate * lastBannerTime;              //@synthesize lastBannerTime=_lastBannerTime - In the implementation block
+(id)shared;
-(void)showPrivacyModalViewWithInfo:(id)arg1 ;
-(void)showBannerWithTitle:(id)arg1 message:(id)arg2 ;
-(NSDate *)lastBannerTime;
-(void)setLastBannerTime:(NSDate *)arg1 ;
@end

