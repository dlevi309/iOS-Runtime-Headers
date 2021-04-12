/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSString;


@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL value; 
@required
-(BOOL)value;
-(NSString *)localizedTitle;
-(long long)presentationStyle;
-(NSString *)localizedShortTitle;
-(id)changeValue:(BOOL)arg1;

@end

