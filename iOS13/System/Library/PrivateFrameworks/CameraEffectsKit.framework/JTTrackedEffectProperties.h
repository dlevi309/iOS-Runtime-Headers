/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface JTTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _disableTracking;
	int _internalTrackingType;

}

@property (assign) int internalTrackingType;                             //@synthesize internalTrackingType=_internalTrackingType - In the implementation block
@property (getter=isTrackingDisabled) BOOL disableTracking;              //@synthesize disableTracking=_disableTracking - In the implementation block
@property (assign,nonatomic) int trackingType; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)trackingType;
-(void)setTrackingType:(int)arg1 ;
-(void)setDisableTracking:(BOOL)arg1 ;
-(void)setInternalTrackingType:(int)arg1 ;
-(BOOL)isTrackingDisabled;
-(int)internalTrackingType;
-(void)enableTrackingState:(BOOL)arg1 ;
@end

