/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <Preferences/PSTableCell.h>

@class NSString, UILabel, NSMutableString;

@interface VPNPrimaryTableCell : PSTableCell {

	BOOL _disabled;
	NSString* _alert;
	NSString* _subtitle;
	NSString* _status;
	UILabel* _specialStatusLabel;
	NSMutableString* _detailText;

}

@property (nonatomic,retain) UILabel * specialStatusLabel;              //@synthesize specialStatusLabel=_specialStatusLabel - In the implementation block
@property (retain) NSMutableString * detailText;                        //@synthesize detailText=_detailText - In the implementation block
@property (retain) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * status;                                   //@synthesize status=_status - In the implementation block
@property (retain) NSString * alert;                                    //@synthesize alert=_alert - In the implementation block
@property (assign) BOOL disabled;                                       //@synthesize disabled=_disabled - In the implementation block
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)subtitle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(void)layoutSubviews;
-(void)setAlert:(NSString *)arg1 ;
-(NSString *)alert;
-(void)setStatus:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSMutableString *)detailText;
-(BOOL)disabled;
-(NSString *)status;
-(void)updateDetail;
-(UILabel *)specialStatusLabel;
-(void)setSpecialStatusLabel:(UILabel *)arg1 ;
@end

