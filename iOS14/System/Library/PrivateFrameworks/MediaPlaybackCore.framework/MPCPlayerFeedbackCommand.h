/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSString;


@protocol MPCPlayerFeedbackCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSString * localizedShortTitle; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL value; 
@required
-(NSString *)localizedTitle;
-(long long)presentationStyle;
-(NSString *)localizedShortTitle;
-(BOOL)value;
-(id)changeValue:(BOOL)arg1;

@end

