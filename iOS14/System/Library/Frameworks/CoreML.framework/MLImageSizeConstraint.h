/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet, NSArray;

@interface MLImageSizeConstraint : NSObject <NSSecureCoding> {

	long long _type;
	NSOrderedSet* _imageSizeSet;
	NSRange _pixelsWideRange;
	NSRange _pixelsHighRange;

}

@property (nonatomic,readonly) NSOrderedSet * imageSizeSet;                 //@synthesize imageSizeSet=_imageSizeSet - In the implementation block
@property (nonatomic,readonly) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSRange pixelsWideRange;                     //@synthesize pixelsWideRange=_pixelsWideRange - In the implementation block
@property (nonatomic,readonly) NSRange pixelsHighRange;                     //@synthesize pixelsHighRange=_pixelsHighRange - In the implementation block
@property (nonatomic,readonly) NSArray * enumeratedImageSizes; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)locationClosestTo:(unsigned long long)arg1 inRange:(NSRange)arg2 ;
+(id)closestImageSizeInArray:(id)arg1 toImageSize:(id)arg2 preferDownScaling:(BOOL)arg3 ;
+(id)closestImageSizeInPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 toImageSize:(id)arg3 preferInputAspectRatio:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initUnspecified;
-(id)initWithPixelsWideRange:(NSRange)arg1 pixelsHighRange:(NSRange)arg2 ;
-(id)initWithEnumeratedImageSizes:(id)arg1 ;
-(BOOL)isAllowedImageSize:(id)arg1 error:(id*)arg2 ;
-(NSRange)pixelsWideRange;
-(NSRange)pixelsHighRange;
-(NSOrderedSet *)imageSizeSet;
-(id)allowedImageSizeClosestToPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 preferDownScaling:(BOOL)arg3 preferInputAspectRatio:(BOOL)arg4 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)enumeratedImageSizes;
@end

