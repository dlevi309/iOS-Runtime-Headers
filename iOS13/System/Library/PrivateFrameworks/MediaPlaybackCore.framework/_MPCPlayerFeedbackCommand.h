/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerFeedbackCommand.h>

@class NSString;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand> {

	BOOL _value;
	unsigned _command;
	NSString* _localizedTitle;
	NSString* _localizedShortTitle;
	long long _presentationStyle;

}

@property (nonatomic,readonly) unsigned command;                        //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                   //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedShortTitle;              //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
@property (assign,nonatomic) long long presentationStyle;               //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) BOOL value;                                //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(unsigned)command;
-(NSString *)localizedShortTitle;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(id)initWithResponse:(id)arg1 mediaRemoteCommand:(unsigned)arg2 ;
-(id)changeValue:(BOOL)arg1 ;
@end

