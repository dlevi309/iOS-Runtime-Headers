/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


#import <PhotoVision/PhotoVision-Structs.h>
@class NSString, CIImage, NSURL, NSData;

@interface PVImage : NSObject {

	unsigned _orientation;
	unsigned long long _assetWidth;
	unsigned long long _assetHeight;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _orientedWidth;
	unsigned long long _orientedHeight;
	unsigned long long _bytesPerRow;
	id _adjustmentVersion;
	NSString* _groupingIdentifier;
	CIImage* _CIImage;
	CGImageRef _CGImage;
	NSURL* _imageURL;
	NSData* _imageData;

}

@property (nonatomic,readonly) unsigned long long assetWidth;                  //@synthesize assetWidth=_assetWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long assetHeight;                 //@synthesize assetHeight=_assetHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                       //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long orientedWidth;               //@synthesize orientedWidth=_orientedWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long orientedHeight;              //@synthesize orientedHeight=_orientedHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                 //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned orientation;                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,copy,readonly) id adjustmentVersion;                      //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (nonatomic,readonly) NSString * groupingIdentifier;                  //@synthesize groupingIdentifier=_groupingIdentifier - In the implementation block
@property (nonatomic,readonly) CIImage * CIImage;                              //@synthesize CIImage=_CIImage - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                             //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                          //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                             //@synthesize imageData=_imageData - In the implementation block
+(id)imageWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
+(id)imageWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
+(id)imageWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
+(id)imageWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4 ;
-(void)dealloc;
-(unsigned)orientation;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(CGImageRef)CGImage;
-(CIImage *)CIImage;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(unsigned long long)orientedWidth;
-(unsigned long long)orientedHeight;
-(id)adjustmentVersion;
-(NSString *)groupingIdentifier;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 adjustmentVersion:(id)arg3 creationDate:(id)arg4 ;
-(id)initWithCIImage:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 orientation:(unsigned)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
-(id)initWithData:(id)arg1 imageCreationOptions:(id)arg2 assetWidth:(unsigned long long)arg3 assetHeight:(unsigned long long)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
-(id)initWithURL:(id)arg1 assetWidth:(unsigned long long)arg2 assetHeight:(unsigned long long)arg3 imageCreationOptions:(id)arg4 adjustmentVersion:(id)arg5 creationDate:(id)arg6 ;
-(CGRect)imageRectForNormalizedRect:(CGRect)arg1 ;
-(unsigned long long)assetWidth;
-(unsigned long long)assetHeight;
@end

