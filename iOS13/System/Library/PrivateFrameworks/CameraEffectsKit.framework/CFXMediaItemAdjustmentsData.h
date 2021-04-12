/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding> {

	long long _cameraMode;
	NSArray* _effectStack;

}

@property (nonatomic,readonly) long long cameraMode;               //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;              //@synthesize effectStack=_effectStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodingClassWhitelist;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)cameraMode;
-(NSArray *)effectStack;
-(id)initWithCameraMode:(long long)arg1 effectStack:(id)arg2 ;
@end

