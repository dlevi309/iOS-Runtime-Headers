/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <vCard/vCard-Structs.h>
#import <vCard/CNVCardImage.h>

@class NSData, NSDictionary, NSValue, NSNumber;

@interface CNVCardMutableImage : CNVCardImage {

	NSData* _originalData;
	NSDictionary* _originalCropRects;
	CGSize _originalSize;
	CGImageRef _CGImage;
	BOOL _attemptedCGImage;
	NSValue* _targetSizeValue;
	NSNumber* _compressionQuality;

}

@property (nonatomic,copy,readonly) NSData * originalData;                    //@synthesize originalData=_originalData - In the implementation block
@property (nonatomic,readonly) NSDictionary * originalCropRects;              //@synthesize originalCropRects=_originalCropRects - In the implementation block
@property (nonatomic,readonly) CGSize originalSize;                           //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGImageRef CGImage;                            //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) BOOL attemptedCGImage;                         //@synthesize attemptedCGImage=_attemptedCGImage - In the implementation block
@property (nonatomic,copy) NSValue * targetSizeValue;                         //@synthesize targetSizeValue=_targetSizeValue - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSNumber * compressionQuality;                     //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(CGImageRef)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2 ;
+(id)scaleCropRects:(id)arg1 factor:(double)arg2 ;
+(CGRect)scaleRect:(CGRect)arg1 byFactor:(double)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(CGImageRef)CGImage;
-(CGSize)originalSize;
-(NSNumber *)compressionQuality;
-(void)setCompressionQuality:(NSNumber *)arg1 ;
-(id)cropRects;
-(id)initWithData:(id)arg1 cropRects:(id)arg2 size:(CGSize)arg3 ;
-(void)describePropertiesWithBuilder:(id)arg1 ;
-(NSData *)originalData;
-(NSDictionary *)originalCropRects;
-(void)nts_updateRepresentation;
-(void)nts_invalidateImageSize;
-(void)setTargetSizeValue:(NSValue *)arg1 ;
-(void)nts_invalidateImageQuality;
-(id)JPEGRepresentationOfCGImage:(CGImageRef)arg1 quality:(id)arg2 ;
-(BOOL)attemptedCGImage;
-(NSValue *)targetSizeValue;
@end

