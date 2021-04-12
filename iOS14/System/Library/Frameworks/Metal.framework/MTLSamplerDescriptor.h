/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying> {

	BOOL _lodAverage;

}

@property (assign,nonatomic) BOOL forceResourceIndex; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (assign,nonatomic) unsigned long long minFilter; 
@property (assign,nonatomic) unsigned long long magFilter; 
@property (assign,nonatomic) unsigned long long mipFilter; 
@property (assign,nonatomic) unsigned long long maxAnisotropy; 
@property (assign,nonatomic) unsigned long long sAddressMode; 
@property (assign,nonatomic) unsigned long long tAddressMode; 
@property (assign,nonatomic) unsigned long long rAddressMode; 
@property (assign,nonatomic) unsigned long long borderColor; 
@property (assign,nonatomic) BOOL normalizedCoordinates; 
@property (assign,nonatomic) float lodMinClamp; 
@property (assign,nonatomic) float lodMaxClamp; 
@property (assign,nonatomic) BOOL lodAverage;                                 //@synthesize lodAverage=_lodAverage - In the implementation block
@property (assign,nonatomic) unsigned long long compareFunction; 
@property (assign,nonatomic) BOOL supportArgumentBuffers; 
@property (nonatomic,copy) NSString * label; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)lodAverage;
-(void)setLodAverage:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

