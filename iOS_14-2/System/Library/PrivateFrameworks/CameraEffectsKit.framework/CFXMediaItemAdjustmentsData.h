/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSArray;

@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding> {

	long long _cameraMode;
	NSURL* _metadataURL;
	long long _cameraPosition;
	NSArray* _effectStack;

}

@property (nonatomic,readonly) long long cameraMode;                  //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) NSURL * metadataURL;                   //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,readonly) long long cameraPosition;              //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,readonly) NSArray * effectStack;                 //@synthesize effectStack=_effectStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secureCodingClassWhitelist;
-(long long)cameraPosition;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)metadataURL;
-(id)initWithCoder:(id)arg1 ;
-(long long)cameraMode;
-(NSArray *)effectStack;
-(id)initWithCameraMode:(long long)arg1 metadataURL:(id)arg2 cameraPosition:(long long)arg3 effectStack:(id)arg4 ;
@end

