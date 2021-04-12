/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/

#import <Preferences/PSTableCell.h>

@class NSString, NSMutableString;

@interface VPNTableCell : PSTableCell {

	NSString* _alert;
	NSString* _subtitle;
	NSMutableString* _detailText;

}

@property (retain) NSMutableString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSString * alert;                          //@synthesize alert=_alert - In the implementation block
-(NSString *)subtitle;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDetailText:(NSMutableString *)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setAlert:(NSString *)arg1 ;
-(NSString *)alert;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSMutableString *)detailText;
-(void)updateDetail;
@end

