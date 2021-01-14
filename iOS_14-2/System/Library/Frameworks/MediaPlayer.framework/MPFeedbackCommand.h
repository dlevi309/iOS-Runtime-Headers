/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {

	long long _presentationStyle;
	BOOL _active;
	NSString* _localizedTitle;
	NSString* _localizedShortTitle;

}

@property (assign,getter=isActive,nonatomic) BOOL active;               //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                   //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedShortTitle;              //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(long long)presentationStyle;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(id)newCommandEventWithState:(long long)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(BOOL)isActive;
-(NSString *)localizedShortTitle;
-(id)_mediaRemoteCommandInfoOptions;
@end

