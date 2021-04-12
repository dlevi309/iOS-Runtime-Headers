/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {

	long long _format;
	NSURL* _destinationURL;
	double _compressionQuality;
	CGSize _size;

}

@property (nonatomic,readonly) long long format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)destinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3 ;
+(id)jpegDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(long long)format;
-(NSURL *)destinationURL;
-(double)compressionQuality;
-(id)initWithFormat:(long long)arg1 size:(CGSize)arg2 compressionQuality:(double)arg3 destinationURL:(id)arg4 ;
@end

