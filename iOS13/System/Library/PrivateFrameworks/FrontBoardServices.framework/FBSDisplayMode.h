/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _preferredScale;
	double _scaleOverride;
	double _refreshRate;
	long long _gamut;
	long long _hdr;
	long long _rotation;
	BOOL _virtual;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) CGSize nativePixelSize; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double refreshRate;                  //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long colorGamut;                //@synthesize gamut=_gamut - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                   //@synthesize hdr=_hdr - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_emptyMode;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(unsigned long long)_width;
-(unsigned long long)_height;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)_rotation;
-(long long)hdrMode;
-(CGSize)pixelSize;
-(long long)colorGamut;
-(double)refreshRate;
-(CGSize)nativePixelSize;
-(id)_initWithCADisplayMode:(id)arg1 scale:(double)arg2 rotation:(long long)arg3 ;
-(id)_referenceSizeDescription;
-(id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 preferredScale:(unsigned long long)arg3 scaleOverride:(double)arg4 refreshRate:(double)arg5 gamut:(long long)arg6 hdr:(long long)arg7 rotation:(long long)arg8 virtual:(BOOL)arg9 validityCheck:(long long)arg10 ;
-(id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scale:(unsigned long long)arg3 refreshRate:(double)arg4 gamut:(long long)arg5 hdr:(long long)arg6 ;
-(id)_copyWithOverrideSize:(CGSize)arg1 ;
-(BOOL)_isVirtualMode;
-(unsigned long long)_caWidth;
-(unsigned long long)_caHeight;
-(unsigned long long)_caPreferredScale;
-(double)_caRefreshRate;
-(id)_caColorGamut;
-(id)_caHDRMode;
@end

