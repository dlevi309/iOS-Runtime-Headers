/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TURemoteVideoClient.h>

@protocol TURemoteVideoClient <NSObject>
@required
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2;

@end


@class CALayer, NSString;

@interface TURemoteVideoClient : NSObject <TURemoteVideoClient> {

	long long _videoContextSlotIdentifier;
	CALayer* _videoLayer;

}

@property (nonatomic,readonly) long long videoContextSlotIdentifier;              //@synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier - In the implementation block
@property (nonatomic,retain) CALayer * videoLayer;                                //@synthesize videoLayer=_videoLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(void)cleanUpSubLayerForLayer:(id)arg1 ;
-(long long)videoContextSlotIdentifier;
-(void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2 ;
-(id)nameForSubLayer;
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2 ;
-(id)initWithVideoContextSlotIdentifier:(long long)arg1 ;
-(CALayer *)videoLayer;
@end

