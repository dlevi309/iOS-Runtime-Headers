/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(id)_copyWithClass:(Class)arg1 ;
-(BOOL)isBackgroundColorLight;
-(UIColor *)primaryTextColor;
-(BOOL)isPrimaryTextColorLight;
-(UIColor *)secondaryTextColor;
-(BOOL)isSecondaryTextColorLight;
@end

