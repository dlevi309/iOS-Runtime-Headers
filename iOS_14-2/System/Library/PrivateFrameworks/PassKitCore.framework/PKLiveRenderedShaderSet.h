/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {

	NSString* _geometryEntryPointShader;
	NSString* _surfaceEntryPointShader;
	NSString* _lightingModelEntryPointShader;
	NSString* _fragmentEntryPointShader;

}

@property (nonatomic,copy,readonly) NSString * geometryEntryPointShader;                   //@synthesize geometryEntryPointShader=_geometryEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * surfaceEntryPointShader;                    //@synthesize surfaceEntryPointShader=_surfaceEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightingModelEntryPointShader;              //@synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * fragmentEntryPointShader;                   //@synthesize fragmentEntryPointShader=_fragmentEntryPointShader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)surfaceEntryPointShader;
-(NSString *)geometryEntryPointShader;
-(NSString *)lightingModelEntryPointShader;
-(NSString *)fragmentEntryPointShader;
-(id)initWithDataAccessor:(id)arg1 suffix:(id)arg2 ;
@end

