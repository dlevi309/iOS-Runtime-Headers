/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NTKFaceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	long long _faceStyle;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) long long faceStyle;                      //@synthesize faceStyle=_faceStyle - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)faceStyle;
-(id)initWithFaceStyle:(long long)arg1 ;
-(BOOL)isAvailableForDevice:(id)arg1 ;
-(id)_initWithFaceStyle:(long long)arg1 bundleIdentifier:(id)arg2 ;
@end

