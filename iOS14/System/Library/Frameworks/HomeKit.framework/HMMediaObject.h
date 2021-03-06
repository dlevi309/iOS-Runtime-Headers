/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

