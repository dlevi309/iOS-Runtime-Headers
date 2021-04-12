/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, FCColor, FCColorGradient, NSArray, NSDictionary;

@interface FCSpecialEventsOperationResult : NSObject {

	BOOL _micaEnabled;
	long long _type;
	NSString* _titleText;
	FCColor* _titleColor;
	NSString* _fontName;
	double _fontSize;
	double _fontSizeiPad;
	double _fontTracking;
	double _fontTrackingiPad;
	double _titleOffsetHeight;
	double _titleOffsetHeightiPad;
	double _titleOffsetY;
	double _titleOffsetYiPad;
	NSString* _micaAnimationFileUrlString;
	NSString* _micaAnimationFileUrlStringiPad;
	NSString* _actionTitle;
	NSString* _actionUrlString;
	FCColorGradient* _backgroundColorGradient;
	FCColorGradient* _darkStyleBackgroundColorGradient;
	NSArray* _groupFonts;
	NSArray* _specialEventItems;
	NSDictionary* _specialEventHeadlinesByArticleID;
	NSString* _fontUrlString;

}

@property (assign,nonatomic) long long type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) FCColor * titleColor;                                                     //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * fontName;                                                      //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * fontUrlString;                                                 //@synthesize fontUrlString=_fontUrlString - In the implementation block
@property (assign,nonatomic) double fontSize;                                                        //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double fontTracking;                                                    //@synthesize fontTracking=_fontTracking - In the implementation block
@property (nonatomic,copy) NSString * micaAnimationFileUrlString;                                    //@synthesize micaAnimationFileUrlString=_micaAnimationFileUrlString - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                                                   //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy) NSString * actionUrlString;                                               //@synthesize actionUrlString=_actionUrlString - In the implementation block
@property (nonatomic,copy) FCColorGradient * backgroundColorGradient;                                //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
@property (nonatomic,retain) NSArray * groupFonts;                                                   //@synthesize groupFonts=_groupFonts - In the implementation block
@property (nonatomic,retain) NSArray * specialEventItems;                                            //@synthesize specialEventItems=_specialEventItems - In the implementation block
@property (nonatomic,retain) NSDictionary * specialEventHeadlinesByArticleID;                        //@synthesize specialEventHeadlinesByArticleID=_specialEventHeadlinesByArticleID - In the implementation block
@property (nonatomic,readonly) double fontSizeiPad;                                                  //@synthesize fontSizeiPad=_fontSizeiPad - In the implementation block
@property (nonatomic,readonly) double fontTrackingiPad;                                              //@synthesize fontTrackingiPad=_fontTrackingiPad - In the implementation block
@property (nonatomic,readonly) double titleOffsetHeight;                                             //@synthesize titleOffsetHeight=_titleOffsetHeight - In the implementation block
@property (nonatomic,readonly) double titleOffsetHeightiPad;                                         //@synthesize titleOffsetHeightiPad=_titleOffsetHeightiPad - In the implementation block
@property (nonatomic,readonly) double titleOffsetY;                                                  //@synthesize titleOffsetY=_titleOffsetY - In the implementation block
@property (nonatomic,readonly) double titleOffsetYiPad;                                              //@synthesize titleOffsetYiPad=_titleOffsetYiPad - In the implementation block
@property (nonatomic,copy,readonly) NSString * micaAnimationFileUrlStringiPad;                       //@synthesize micaAnimationFileUrlStringiPad=_micaAnimationFileUrlStringiPad - In the implementation block
@property (nonatomic,readonly) BOOL micaEnabled;                                                     //@synthesize micaEnabled=_micaEnabled - In the implementation block
@property (nonatomic,copy,readonly) FCColorGradient * darkStyleBackgroundColorGradient;              //@synthesize darkStyleBackgroundColorGradient=_darkStyleBackgroundColorGradient - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)fontName;
-(void)setFontName:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(FCColor *)titleColor;
-(void)setTitleColor:(FCColor *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)actionTitle;
-(void)setActionTitle:(NSString *)arg1 ;
-(FCColorGradient *)backgroundColorGradient;
-(FCColorGradient *)darkStyleBackgroundColorGradient;
-(NSString *)actionUrlString;
-(NSArray *)groupFonts;
-(void)setGroupFonts:(NSArray *)arg1 ;
-(NSArray *)specialEventItems;
-(void)setSpecialEventItems:(NSArray *)arg1 ;
-(void)setBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(id)initWithType:(long long)arg1 specialEventsGroupConfig:(id)arg2 specialEventItems:(id)arg3 specialEventHeadlinesByArticleID:(id)arg4 ;
-(double)fontSizeiPad;
-(double)fontTracking;
-(void)setFontTracking:(double)arg1 ;
-(double)fontTrackingiPad;
-(double)titleOffsetHeight;
-(double)titleOffsetHeightiPad;
-(double)titleOffsetY;
-(double)titleOffsetYiPad;
-(NSString *)micaAnimationFileUrlString;
-(void)setMicaAnimationFileUrlString:(NSString *)arg1 ;
-(NSString *)micaAnimationFileUrlStringiPad;
-(BOOL)micaEnabled;
-(void)setActionUrlString:(NSString *)arg1 ;
-(NSDictionary *)specialEventHeadlinesByArticleID;
-(void)setSpecialEventHeadlinesByArticleID:(NSDictionary *)arg1 ;
-(NSString *)fontUrlString;
-(void)setFontUrlString:(NSString *)arg1 ;
@end

