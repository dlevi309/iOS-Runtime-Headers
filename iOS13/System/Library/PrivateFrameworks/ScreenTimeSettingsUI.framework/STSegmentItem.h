/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSString, UIColor, UIImage;

@interface STSegmentItem : NSObject {

	NSString* _titleText;
	NSString* _detailText;
	UIColor* _titleColor;
	UIImage* _detailImage;
	UIColor* _detailImageTintColor;

}

@property (nonatomic,copy,readonly) NSString * titleText;               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                    //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIImage * detailImage;                   //@synthesize detailImage=_detailImage - In the implementation block
@property (copy,readonly) UIColor * detailImageTintColor;               //@synthesize detailImageTintColor=_detailImageTintColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIColor *)titleColor;
-(NSString *)detailText;
-(NSString *)titleText;
-(UIImage *)detailImage;
-(id)initWithTitleText:(id)arg1 detailText:(id)arg2 titleColor:(id)arg3 detailImage:(id)arg4 detailImageTintColor:(id)arg5 ;
-(UIColor *)detailImageTintColor;
@end

