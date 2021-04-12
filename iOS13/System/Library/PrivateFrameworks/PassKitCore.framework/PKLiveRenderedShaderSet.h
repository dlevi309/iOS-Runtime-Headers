/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSString * geometryEntryPointShader;                   //@synthesize geometryEntryPointShader=_geometryEntryPointShader - In the implementation block
@property (nonatomic,retain) NSString * surfaceEntryPointShader;                    //@synthesize surfaceEntryPointShader=_surfaceEntryPointShader - In the implementation block
@property (nonatomic,retain) NSString * lightingModelEntryPointShader;              //@synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader - In the implementation block
@property (nonatomic,retain) NSString * fragmentEntryPointShader;                   //@synthesize fragmentEntryPointShader=_fragmentEntryPointShader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataAccessor:(id)arg1 suffix:(id)arg2 ;
-(NSString *)geometryEntryPointShader;
-(NSString *)lightingModelEntryPointShader;
-(NSString *)surfaceEntryPointShader;
-(NSString *)fragmentEntryPointShader;
-(void)setGeometryEntryPointShader:(NSString *)arg1 ;
-(void)setLightingModelEntryPointShader:(NSString *)arg1 ;
-(void)setSurfaceEntryPointShader:(NSString *)arg1 ;
-(void)setFragmentEntryPointShader:(NSString *)arg1 ;
@end

