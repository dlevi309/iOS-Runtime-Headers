/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage {

	NSString* _bundleIdentifier;
	unsigned long long _variant;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long variant;               //@synthesize variant=_variant - In the implementation block
+(CGSize)sizeForVariant:(unsigned long long)arg1 ;
+(id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2 ;
+(id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
+(double)cornerRadiusForVariant:(unsigned long long)arg1 ;
+(id)descriptorNameForVariant:(unsigned long long)arg1 ;
+(int)iconFormatForVariant:(unsigned long long)arg1 ;
+(id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleIdentifier;
-(unsigned long long)variant;
-(id)uniqueIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setVariant:(unsigned long long)arg1 ;
-(id)loadImage;
-(id)uiImage;
-(void)setUiImage:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2 ;
-(id)generateImageWithFormat:(int)arg1 ;
-(BOOL)needsTinting;
@end

