/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/


@class NSString, UIColor, NSURL;

@interface HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject {

	 title;
	 subtitle;
	 backgroundColor;
	 textColor;
	 style;

}

@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * subtitle; 
@property (readonly,nonatomic) UIColor * backgroundColor; 
@property (readonly,nonatomic) UIColor * textColor; 
@property (readonly,nonatomic) NSURL * logoURL; 
@property (readonly,nonatomic) long long style; 
-(UIColor *)textColor;
-(id)init;
-(NSURL *)logoURL;
-(NSString *)subtitle;
-(UIColor *)backgroundColor;
-(long long)style;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 backgroundColor:(id)arg3 textColor:(id)arg4 logoURL:(id)arg5 style:(long long)arg6 ;
@end

