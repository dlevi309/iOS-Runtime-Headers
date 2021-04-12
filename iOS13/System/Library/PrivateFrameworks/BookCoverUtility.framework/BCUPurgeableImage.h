/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUPurgeableImage.h>

@protocol BCUPurgeableImage <NSObject>
@property (nonatomic,readonly) double contentsScale; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
@required
-(CGSize)size;
-(CGImageRef)CGImage;
-(double)contentsScale;
-(id)layerContents;
-(BOOL)markAsVolatile;
-(BOOL)markAsNonVolatile;

@end


@class NSString;

@interface BCUPurgeableImage : NSObject <BCUPurgeableImage> {

	CGImageRef _image;
	IOSurfaceRef _surface;
	double _contentsScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double contentsScale;                //@synthesize contentsScale=_contentsScale - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) id layerContents; 
-(void)dealloc;
-(CGSize)size;
-(CGImageRef)CGImage;
-(double)contentsScale;
-(id)layerContents;
-(id)initWithImage:(CGImageRef)arg1 surface:(IOSurfaceRef)arg2 contentsScale:(double)arg3 ;
-(BOOL)markAsVolatile;
-(BOOL)markAsNonVolatile;
@end

