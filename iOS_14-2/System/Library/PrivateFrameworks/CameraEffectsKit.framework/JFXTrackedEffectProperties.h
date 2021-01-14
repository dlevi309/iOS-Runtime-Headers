/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol JFXTrackedEffectPropertiesDelegate;
@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding> {

	BOOL _disableTracking;
	id<JFXTrackedEffectPropertiesDelegate> _delegate;
	long long _internalTrackingType;

}

@property (assign) long long internalTrackingType;                                                //@synthesize internalTrackingType=_internalTrackingType - In the implementation block
@property (getter=isTrackingDisabled) BOOL disableTracking;                                       //@synthesize disableTracking=_disableTracking - In the implementation block
@property (assign,nonatomic) long long trackingType; 
@property (assign,nonatomic,__weak) id<JFXTrackedEffectPropertiesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id<JFXTrackedEffectPropertiesDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<JFXTrackedEffectPropertiesDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)trackingType;
-(void)setTrackingType:(long long)arg1 ;
-(void)setDisableTracking:(BOOL)arg1 ;
-(void)setInternalTrackingType:(long long)arg1 ;
-(BOOL)isTrackingDisabled;
-(long long)internalTrackingType;
-(void)enableTrackingState:(BOOL)arg1 ;
@end

