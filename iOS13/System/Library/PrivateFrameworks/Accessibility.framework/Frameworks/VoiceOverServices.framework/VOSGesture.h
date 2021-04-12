/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VOSGesture : NSObject <NSSecureCoding> {

	NSString* _rawValue;

}

@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(BOOL)supportsSecureCoding;
+(id)OneFingerSingleTap;
+(id)OneFingerDoubleTap;
+(id)OneFingerTripleTap;
+(id)OneFingerQuadrupleTap;
+(id)TwoFingerSingleTap;
+(id)TwoFingerDoubleTap;
+(id)TwoFingerTripleTap;
+(id)TwoFingerQuadrupleTap;
+(id)ThreeFingerSingleTap;
+(id)ThreeFingerDoubleTap;
+(id)ThreeFingerTripleTap;
+(id)ThreeFingerQuadrupleTap;
+(id)FourFingerSingleTap;
+(id)FourFingerDoubleTap;
+(id)FourFingerTripleTap;
+(id)FourFingerQuadrupleTap;
+(id)FiveFingerSingleTap;
+(id)FiveFingerDoubleTap;
+(id)FiveFingerTripleTap;
+(id)FiveFingerQuadrupleTap;
+(id)OneFingerFlickLeft;
+(id)OneFingerFlickRight;
+(id)OneFingerFlickUp;
+(id)OneFingerFlickDown;
+(id)TwoFingerFlickLeft;
+(id)TwoFingerFlickRight;
+(id)TwoFingerFlickUp;
+(id)TwoFingerFlickDown;
+(id)ThreeFingerFlickLeft;
+(id)ThreeFingerFlickRight;
+(id)ThreeFingerFlickUp;
+(id)ThreeFingerFlickDown;
+(id)FourFingerFlickLeft;
+(id)FourFingerFlickRight;
+(id)FourFingerFlickUp;
+(id)FourFingerFlickDown;
+(id)TwoFingerRotateCounterclockwise;
+(id)TwoFingerRotateClockwise;
+(id)TwoFingerScrub;
+(id)OneFingerSingleTapAndHold;
+(id)OneFingerDoubleTapAndHold;
+(id)TwoFingerSingleTapAndHold;
+(id)TwoFingerDoubleTapAndHold;
+(id)ThreeFingerSingleTapAndHold;
+(id)ThreeFingerDoubleTapAndHold;
+(id)ThreeFingerDoubleTapHoldAndFlickUp;
+(id)ThreeFingerDoubleTapHoldAndFlickLeft;
+(id)ThreeFingerDoubleTapHoldAndFlickDown;
+(id)ThreeFingerDoubleTapHoldAndFlickRight;
+(id)allGestures;
+(id)_gesturesForFingerCount:(long long)arg1 ;
+(id)Invalid;
+(id)gestureWithStringValue:(id)arg1 ;
+(id)horizontalMirrorGestureForGesture:(id)arg1 ;
+(id)rtlGestureForGesture:(id)arg1 ;
+(id)oneFingerGestures;
+(id)twoFingerGestures;
+(id)threeFingerGestures;
+(id)fourFingerGestures;
+(id)fiveFingerGestures;
+(id)conflictingZoomGestures;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(id)_initWithRawValue:(id)arg1 ;
@end

