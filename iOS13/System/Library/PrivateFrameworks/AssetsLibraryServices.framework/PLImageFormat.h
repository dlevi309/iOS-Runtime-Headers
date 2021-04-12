/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString;

@interface PLImageFormat : NSObject {

	BOOL _isCropped;
	BOOL _isAlwaysFullScreen;
	unsigned short _formatID;
	NSString* _name;
	double _dimension;
	long long _formatMode;
	long long _version;
	const SCD_Struct_PL13* _bakedFormatInfo;
	long long _thumbnailKind;
	CGSize _size;

}

@property (assign,nonatomic) unsigned short formatID;                               //@synthesize formatID=_formatID - In the implementation block
@property (assign,nonatomic) long long thumbnailKind;                               //@synthesize thumbnailKind=_thumbnailKind - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isCropped;                                      //@synthesize isCropped=_isCropped - In the implementation block
@property (nonatomic,readonly) double dimension;                                    //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,readonly) long long formatMode;                                //@synthesize formatMode=_formatMode - In the implementation block
@property (nonatomic,readonly) BOOL isSquare; 
@property (nonatomic,readonly) BOOL dimensionsReferToShortSide; 
@property (nonatomic,readonly) BOOL isTable; 
@property (nonatomic,readonly) BOOL isThumbnail; 
@property (nonatomic,readonly) BOOL isAlwaysFullScreen;                             //@synthesize isAlwaysFullScreen=_isAlwaysFullScreen - In the implementation block
@property (nonatomic,readonly) long long version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL refersToLatestVersion; 
@property (nonatomic,readonly) BOOL refersToUnadjustedVersion; 
@property (nonatomic,readonly) BOOL refersToPenultimateVersion; 
@property (nonatomic,readonly) BOOL refersToOriginalVersion; 
@property (nonatomic,readonly) const SCD_Struct_PL13* bakedFormatInfo;              //@synthesize bakedFormatInfo=_bakedFormatInfo - In the implementation block
@property (nonatomic,readonly) BOOL bakedFormatIsDynamicallySized; 
+(id)formatWithID:(unsigned short)arg1 ;
+(id)_syncFormats;
-(long long)contentMode;
-(CGSize)sizeWithFallBackSize:(CGSize)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(CGSize)size;
-(long long)version;
-(double)dimension;
-(id)shortDescription;
-(BOOL)isCropped;
-(unsigned short)formatID;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 ;
-(BOOL)isTable;
-(BOOL)isSquare;
-(long long)formatMode;
-(BOOL)isThumbnail;
-(unsigned long long)fullSizeMinShortSide;
-(unsigned long long)fullSizeDesiredLongSide;
-(unsigned long long)fullSizeMaxLongSide;
-(CGSize)scaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(BOOL)refersToUnadjustedVersion;
-(BOOL)isEqualToFormat:(id)arg1 ;
-(BOOL)refersToPenultimateVersion;
-(BOOL)refersToOriginalVersion;
-(BOOL)isAlwaysFullScreen;
-(BOOL)refersToLatestVersion;
-(id)thumbnailSpecification;
-(BOOL)dimensionsReferToShortSide;
-(BOOL)_canDegradeToFormat:(id)arg1 ;
-(BOOL)_isAcceptableForViewSize:(CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(CGSize)arg4 demoteFactor:(double)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 size:(CGSize)arg2 isCropped:(BOOL)arg3 version:(long long)arg4 isAlwaysFullScreen:(BOOL)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7 ;
-(id)initWithFormatID:(unsigned short)arg1 ;
-(BOOL)bakedFormatIsDynamicallySized;
-(CGSize)sizeOfThumbnailWithAspectRatio:(double)arg1 ;
-(CGSize)_shortSideFormatScaledSizeForSourceSize:(CGSize)arg1 capLength:(BOOL)arg2 ;
-(void)setFormatID:(unsigned short)arg1 ;
-(const SCD_Struct_PL13*)bakedFormatInfo;
-(long long)thumbnailKind;
-(void)setThumbnailKind:(long long)arg1 ;
@end

