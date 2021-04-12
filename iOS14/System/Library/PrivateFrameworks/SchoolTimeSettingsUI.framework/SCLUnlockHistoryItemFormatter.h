/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <Foundation/NSFormatter.h>

@class UIColor, NSLocale, NSDateFormatter, NSDateComponentsFormatter;

@interface SCLUnlockHistoryItemFormatter : NSFormatter {

	UIColor* _color;
	UIColor* _highlightColor;
	NSLocale* _locale;
	NSDateFormatter* _dateFormatter;
	NSDateComponentsFormatter* _componentsFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;                              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateComponentsFormatter * componentsFormatter;              //@synthesize componentsFormatter=_componentsFormatter - In the implementation block
@property (nonatomic,retain) UIColor * color;                                              //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                     //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                            //@synthesize locale=_locale - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(id)formatString;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(UIColor *)color;
-(NSDateFormatter *)dateFormatter;
-(void)setColor:(UIColor *)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(id)fontDescriptor;
-(id)timeStringForHistoryItem:(id)arg1 ;
-(id)durationStringForHistoryItem:(id)arg1 ;
-(NSDateComponentsFormatter *)componentsFormatter;
-(void)setComponentsFormatter:(NSDateComponentsFormatter *)arg1 ;
@end

