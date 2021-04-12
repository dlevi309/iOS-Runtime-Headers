/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage {

	NSString* _bundleIdentifier;
	unsigned long long _variant;

}

@property (assign,nonatomic) unsigned long long variant;               //@synthesize variant=_variant - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2 ;
+(id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
+(id)descriptorNameForVariant:(unsigned long long)arg1 ;
+(int)iconFormatForVariant:(unsigned long long)arg1 ;
+(unsigned long long)bestVariantForSize:(CGSize)arg1 ;
+(id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2 ;
+(double)cornerRadiusForVariant:(unsigned long long)arg1 ;
+(CGSize)sizeForVariant:(unsigned long long)arg1 ;
-(id)loadImage;
-(id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)needsTinting;
-(unsigned long long)variant;
-(NSString *)bundleIdentifier;
-(id)uniqueIdentifier;
-(void)setVariant:(unsigned long long)arg1 ;
-(void)invalidateAppIcon;
-(int)defaultCornerRoundingStyle;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1 ;
-(id)generateImageWithFormat:(int)arg1 ;
-(void)appIconWillChange:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

