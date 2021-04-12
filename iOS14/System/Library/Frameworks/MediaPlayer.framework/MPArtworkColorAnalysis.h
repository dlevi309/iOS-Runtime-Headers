/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor;

@interface MPArtworkColorAnalysis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	UIColor* _backgroundColor;
	BOOL _backgroundColorLight;
	UIColor* _primaryTextColor;
	BOOL _primaryTextColorLight;
	UIColor* _secondaryTextColor;
	BOOL _secondaryTextColorLight;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (getter=isBackgroundColorLight,nonatomic,readonly) BOOL backgroundColorLight;                    //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * primaryTextColor;                                                 //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (getter=isPrimaryTextColorLight,nonatomic,readonly) BOOL primaryTextColorLight;                  //@synthesize primaryTextColorLight=_primaryTextColorLight - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                               //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (getter=isSecondaryTextColorLight,nonatomic,readonly) BOOL secondaryTextColorLight;              //@synthesize secondaryTextColorLight=_secondaryTextColorLight - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(id)_copyWithClass:(Class)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isBackgroundColorLight;
-(BOOL)isPrimaryTextColorLight;
-(BOOL)isSecondaryTextColorLight;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

