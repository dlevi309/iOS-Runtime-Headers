/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBTopStoriesStyleConfig, NSDictionary, NSString, FCColor;

@interface FCTopStoriesStyleConfiguration : NSObject {

	NTPBTopStoriesStyleConfig* _pbConfig;
	NSDictionary* _configDict;
	unsigned long long _storyType;
	NSString* _label;
	FCColor* _foreground_color;
	FCColor* _dark_style_foreground_color;
	FCColor* _background_color;
	FCColor* _dark_style_background_color;
	NSString* _stringType;

}

@property (nonatomic,readonly) unsigned long long storyType;                       //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,readonly) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) FCColor * foreground_color;                         //@synthesize foreground_color=_foreground_color - In the implementation block
@property (nonatomic,readonly) FCColor * dark_style_foreground_color;              //@synthesize dark_style_foreground_color=_dark_style_foreground_color - In the implementation block
@property (nonatomic,readonly) FCColor * background_color;                         //@synthesize background_color=_background_color - In the implementation block
@property (nonatomic,readonly) FCColor * dark_style_background_color;              //@synthesize dark_style_background_color=_dark_style_background_color - In the implementation block
@property (nonatomic,readonly) NSString * stringType;                              //@synthesize stringType=_stringType - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(unsigned long long)storyType;
-(id)initWithPBTopStoriesStyleConfig:(id)arg1 ;
-(FCColor *)foreground_color;
-(FCColor *)dark_style_foreground_color;
-(FCColor *)background_color;
-(FCColor *)dark_style_background_color;
-(unsigned long long)hash;
-(NSString *)label;
-(NSString *)stringType;
-(BOOL)isEqual:(id)arg1 ;
@end

