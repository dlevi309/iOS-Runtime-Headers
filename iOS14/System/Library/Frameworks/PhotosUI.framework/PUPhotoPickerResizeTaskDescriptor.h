/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCountedSet, NSString;

@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying> {

	NSCountedSet* _cachedAssetsIdentifiersForEstimation;
	unsigned long long _cachedSizeEstimate;
	NSString* _localizedDescription;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                                 //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(id)defaultActualSizeDescriptor;
+(id)defaultLargeDescriptor;
+(id)defaultMediumDescriptor;
+(id)defaultSmallDescriptor;
+(id)orderedDefaultDescriptors;
-(CGSize)targetSize;
-(BOOL)appliesToAsset:(id)arg1 ;
-(unsigned long long)estimatedSizeForAssets:(id)arg1 ;
-(id)initWithLocalizedDescription:(id)arg1 targetSize:(CGSize)arg2 ;
-(id)formattedSizeForAssets:(id)arg1 ;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionForAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

