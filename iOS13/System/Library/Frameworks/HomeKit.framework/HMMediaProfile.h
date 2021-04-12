/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMMediaProfileDelegate.h>
#import <libobjc.A.dylib/HMMediaObject.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>

@protocol HMMediaProfileDelegate;
@class NSString, HMMediaSession, HMAccessorySettings, HMHome;

@interface HMMediaProfile : HMAccessoryProfile <_HMMediaProfileDelegate, HMMediaObject, HMAccessorySettingsContainer> {

	NSString* _routeUID;
	unsigned long long _capability;
	id<HMMediaProfileDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * routeUID;                        //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) unsigned long long capability;              //@synthesize capability=_capability - In the implementation block
@property (__weak) id<HMMediaProfileDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings; 
@property (__weak,readonly) HMHome * containerHome; 
-(id)init;
-(id<HMMediaProfileDelegate>)delegate;
-(void)setDelegate:(id<HMMediaProfileDelegate>)arg1 ;
-(HMAccessorySettings *)settings;
-(NSString *)routeUID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMMediaSession *)mediaSession;
-(HMHome *)containerHome;
-(id)initWithAccessoryProfile:(id)arg1 ;
-(void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(unsigned long long)capability;
-(void)setCapability:(unsigned long long)arg1 ;
@end

