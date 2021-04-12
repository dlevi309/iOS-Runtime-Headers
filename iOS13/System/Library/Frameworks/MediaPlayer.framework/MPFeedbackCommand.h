/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(NSString *)localizedShortTitle;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(id)newCommandEventWithState:(long long)arg1 ;
@end

