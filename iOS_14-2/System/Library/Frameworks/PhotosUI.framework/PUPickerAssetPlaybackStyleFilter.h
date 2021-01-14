/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUPickerFilter.h>

@class NSString;

@interface PUPickerAssetPlaybackStyleFilter : NSObject <PUPickerFilter> {

	long long _playbackStyle;

}

@property (nonatomic,readonly) long long playbackStyle;              //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) BOOL isValidFilter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isValidFilter;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)playbackStyle;
-(unsigned long long)generatedGenericAssetTypes;
-(id)generatedAssetPredicate;
-(unsigned long long)generatedSearchQueryFilterOptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPlaybackStyle:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

