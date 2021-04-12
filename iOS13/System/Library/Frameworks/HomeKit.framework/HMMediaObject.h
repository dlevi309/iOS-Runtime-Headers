/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

@class HMMediaSession, HMAccessorySettings;


@protocol HMMediaObject <NSObject>
@property (__weak) id<HMMediaObjectDelegate> delegate; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@required
-(id<HMMediaObjectDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMAccessorySettings *)settings;
-(HMMediaSession *)mediaSession;

@end

