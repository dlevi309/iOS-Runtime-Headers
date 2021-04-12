/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIColor *)labelColor;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
-(id)initWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 labelColor:(id)arg4 icon:(id)arg5 iconTint:(id)arg6 ;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(void)setIconTint:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
-(UIColor *)iconTint;
@end

