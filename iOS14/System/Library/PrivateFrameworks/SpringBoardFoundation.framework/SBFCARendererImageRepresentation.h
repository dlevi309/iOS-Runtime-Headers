/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData, IOSurface;

@interface SBFCARendererImageRepresentation : NSObject <NSSecureCoding> {

	long long _representationType;
	NSURL* _fileURL;
	NSData* _imageData;
	long long _imageOrientation;
	IOSurface* _surface;

}

@property (nonatomic,readonly) long long representationType;              //@synthesize representationType=_representationType - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fileURL;                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * imageData;                   //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) long long imageOrientation;                //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) IOSurface * surface;                       //@synthesize surface=_surface - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithIOSurface:(id)arg1 imageOrientation:(long long)arg2 ;
+(id)representationWithFileURL:(id)arg1 imageOrientation:(long long)arg2 ;
+(id)representationWithImageData:(id)arg1 imageOrientation:(long long)arg2 ;
+(id)representationWithImage:(id)arg1 ;
-(long long)imageOrientation;
-(void)encodeWithCoder:(id)arg1 ;
-(CGImageRef)createCGImageReturningScale:(double*)arg1 ;
-(long long)representationType;
-(NSURL *)fileURL;
-(IOSurface *)surface;
-(NSData *)imageData;
-(id)initWithCoder:(id)arg1 ;
@end

