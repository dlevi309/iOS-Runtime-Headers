/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PUPickerFilter;
@interface PHPickerFilter : NSObject <NSCopying> {

	id<PUPickerFilter> __puPickerFilter;

}

@property (nonatomic,readonly) id<PUPickerFilter> _puPickerFilter;              //@synthesize _puPickerFilter=__puPickerFilter - In the implementation block
+(id)imagesFilter;
+(id)videosFilter;
+(id)livePhotosFilter;
+(id)anyFilterMatchingSubfilters:(id)arg1 ;
-(id<PUPickerFilter>)_puPickerFilter;
-(id)init;
-(unsigned long long)hash;
-(id)_initWithPUPickerFilter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

