/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class ADBannerView;

@interface SXBannerViewNode : NSObject {

	ADBannerView* _bannerView;
	CGRect _frame;

}

@property (nonatomic,readonly) ADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) CGRect frame;                           //@synthesize frame=_frame - In the implementation block
+(id)nodeWithBannerView:(id)arg1 ;
-(CGRect)frame;
-(ADBannerView *)bannerView;
@end

