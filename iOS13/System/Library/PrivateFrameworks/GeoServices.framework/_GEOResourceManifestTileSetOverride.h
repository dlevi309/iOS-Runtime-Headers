/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding> {

	int _style;
	int _size;
	int _scale;
	NSNumber* _version;
	NSURL* _baseURL;
	NSURL* _localizationURL;

}

@property (nonatomic,readonly) int style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) int scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSNumber * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                      //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSURL * localizationURL;              //@synthesize localizationURL=_localizationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(int)size;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(int)scale;
-(int)style;
-(NSURL *)localizationURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)setLocalizationURL:(NSURL *)arg1 ;
-(id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
@end

