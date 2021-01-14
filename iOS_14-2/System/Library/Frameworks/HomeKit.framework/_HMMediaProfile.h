/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (__weak) id<_HMMediaProfileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMMediaSession * mediaSession;                        //@synthesize mediaSession=_mediaSession - In the implementation block
@property (readonly) NSString * routeUID;                                //@synthesize routeUID=_routeUID - In the implementation block
@property (assign,nonatomic) unsigned long long capability;              //@synthesize capability=_capability - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)routeUID;
-(id<_HMMediaProfileDelegate>)delegate;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HMMediaProfileDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)capability;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(HMMediaSession *)mediaSession;
-(void)_notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(void)setMediaSession:(HMMediaSession *)arg1 ;
-(void)setCapability:(unsigned long long)arg1 ;
@end

