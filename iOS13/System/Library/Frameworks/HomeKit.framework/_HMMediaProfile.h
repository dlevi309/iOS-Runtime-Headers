/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMMediaProfileDelegate;
@class HMMediaSession, NSString;

@interface _HMMediaProfile : _HMAccessoryProfile {

	HMMediaSession* _mediaSession;
	NSString* _routeUID;
	unsigned long long _capability;
	id<_HMMediaProfileDelegate> _delegate;

}

@property (retain) HMMediaSession * mediaSession;                        //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) NSString * routeUID;                                //@synthesize routeUID=_routeUID - In the implementation block
@property (assign,nonatomic) unsigned long long capability;              //@synthesize capability=_capability - In the implementation block
@property (__weak) id<_HMMediaProfileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMMediaProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMMediaProfileDelegate>)arg1 ;
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(HMMediaSession *)mediaSession;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(void)_notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(unsigned long long)capability;
-(void)setCapability:(unsigned long long)arg1 ;
@end

