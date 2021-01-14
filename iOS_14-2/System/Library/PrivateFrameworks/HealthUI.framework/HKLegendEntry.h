/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString, UIColor, UIImage;

@interface HKLegendEntry : NSObject {

	NSString* _title;
	UIColor* _dotColor;
	UIColor* _innerDotColor;
	UIColor* _labelColor;
	UIImage* _icon;
	UIColor* _iconTint;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * dotColor;                   //@synthesize dotColor=_dotColor - In the implementation block
@property (nonatomic,retain) UIColor * innerDotColor;              //@synthesize innerDotColor=_innerDotColor - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                 //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) UIImage * icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIColor * iconTint;                   //@synthesize iconTint=_iconTint - In the implementation block
+(id)legendEntryWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 ;
+(id)legendEntryWithTitle:(id)arg1 labelColor:(id)arg2 ;
+(id)legendEntryWithTitle:(id)arg1 icon:(id)arg2 iconTint:(id)arg3 ;
-(UIImage *)icon;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)iconTint;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 labelColor:(id)arg4 icon:(id)arg5 iconTint:(id)arg6 ;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(void)setIconTint:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
@end

