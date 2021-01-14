/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ISImageDescriptor.h>

@protocol ISImageDescriptor <NSObject>
@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISImageDescriptor : NSObject <NSSecureCoding, ISImageDescriptor, NSCopying> {

	CGSize _size;
	double _scale;
	unsigned long long _variantOptions;
	unsigned long long _badgeOptions;
	unsigned long long _backgroundStyle;
	BOOL _preferExtendedColorResources;
	NSString* _preferedResourceName;
	unsigned long long _languageDirection;

}

@property (readonly) CGSize sanitizedSize; 
@property (readonly) double sanitizedScale; 
@property (retain) NSString * preferedResourceName;                           //@synthesize preferedResourceName=_preferedResourceName - In the implementation block
@property (assign) BOOL preferExtendedColorResources;                         //@synthesize preferExtendedColorResources=_preferExtendedColorResources - In the implementation block
@property (assign) unsigned long long languageDirection;                      //@synthesize languageDirection=_languageDirection - In the implementation block
@property (retain) id<NSCopying> imageCacheKey; 
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long variantOptions;               //@synthesize variantOptions=_variantOptions - In the implementation block
@property (assign,nonatomic) unsigned long long badgeOptions;                 //@synthesize badgeOptions=_badgeOptions - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) unsigned long long shape; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL shouldApplyMask; 
@property (assign,nonatomic) BOOL drawBorder; 
@property (assign,nonatomic) BOOL drawBadge; 
@property (assign,nonatomic) BOOL templateVariant; 
@property (assign,nonatomic) BOOL selectedVariant; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)imageDescriptorNamed:(id)arg1 ;
+(id)icnsImageDescriptors;
-(void)setShape:(unsigned long long)arg1 ;
-(unsigned long long)shape;
-(double)sanitizedScale;
-(id)init;
-(id<NSCopying>)imageCacheKey;
-(void)setTemplateVariant:(BOOL)arg1 ;
-(void)setSelectedVariant:(BOOL)arg1 ;
-(unsigned long long)backgroundStyle;
-(CGSize)size;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(unsigned long long)languageDirection;
-(BOOL)drawBadge;
-(void)setSize:(CGSize)arg1 ;
-(void)setLanguageDirection:(unsigned long long)arg1 ;
-(BOOL)selectedVariant;
-(BOOL)drawBorder;
-(double)continuousCornerRadius;
-(void)setPreferExtendedColorResources:(BOOL)arg1 ;
-(NSString *)description;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(NSString *)preferedResourceName;
-(void)setScale:(double)arg1 ;
-(BOOL)shouldApplyMask;
-(BOOL)templateVariant;
-(unsigned long long)variantOptions;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)preferExtendedColorResources;
-(void)setDrawBadge:(BOOL)arg1 ;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(unsigned long long)badgeOptions;
-(CGSize)sanitizedSize;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(void)setDrawBorder:(BOOL)arg1 ;
-(void)setPreferedResourceName:(NSString *)arg1 ;
@end

