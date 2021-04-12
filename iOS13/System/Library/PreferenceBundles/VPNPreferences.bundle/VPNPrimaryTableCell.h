/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)status;
-(NSString *)subtitle;
-(BOOL)disabled;
-(void)setStatus:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(NSMutableString *)detailText;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(NSString *)alert;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setAlert:(NSString *)arg1 ;
-(void)updateDetail;
-(UILabel *)specialStatusLabel;
-(void)setSpecialStatusLabel:(UILabel *)arg1 ;
@end

