/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)routeUID;
-(HMHome *)containerHome;
-(id)init;
-(id<HMMediaProfileDelegate>)delegate;
-(void)setDelegate:(id<HMMediaProfileDelegate>)arg1 ;
-(void)refreshStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMAccessorySettings *)settings;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)capability;
-(HMMediaSession *)mediaSession;
-(void)mediaProfile:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(void)setCapability:(unsigned long long)arg1 ;
-(id)initWithMediaProfile:(id)arg1 ;
@end

