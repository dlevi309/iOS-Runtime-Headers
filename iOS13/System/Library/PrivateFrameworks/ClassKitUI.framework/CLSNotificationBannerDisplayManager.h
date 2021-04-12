/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
*/


@class NSDate;

@interface CLSNotificationBannerDisplayManager : NSObject {

	NSDate* _lastBannerTime;

}

@property (nonatomic,retain) NSDate * lastBannerTime;              //@synthesize lastBannerTime=_lastBannerTime - In the implementation block
+(id)shared;
-(void)showPrivacyModalView;
-(void)showBannerWithTitle:(id)arg1 message:(id)arg2 ;
-(NSDate *)lastBannerTime;
-(void)setLastBannerTime:(NSDate *)arg1 ;
@end

