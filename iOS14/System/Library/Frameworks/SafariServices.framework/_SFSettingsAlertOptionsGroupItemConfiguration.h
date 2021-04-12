/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class UIView, NSAttributedString;


@protocol _SFSettingsAlertOptionsGroupItemConfiguration <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@required
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(id)arg1;
-(UIView *)accessoryView;
-(void)setEnabled:(BOOL)arg1;
-(void)setAccessoryView:(id)arg1;
-(BOOL)isEnabled;

@end

