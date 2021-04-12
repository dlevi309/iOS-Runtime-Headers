/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(unsigned long long)shape;
-(void)setSize:(CGSize)arg1 ;
-(void)setShape:(unsigned long long)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)backgroundStyle;
-(void)setTemplateVariant:(BOOL)arg1 ;
-(void)setDrawBorder:(BOOL)arg1 ;
-(double)continuousCornerRadius;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setShouldApplyMask:(BOOL)arg1 ;
-(void)setVariantOptions:(unsigned long long)arg1 ;
-(BOOL)shouldApplyMask;
-(unsigned long long)variantOptions;
-(unsigned long long)badgeOptions;
-(NSString *)preferedResourceName;
-(id<NSCopying>)imageCacheKey;
-(BOOL)drawBorder;
-(void)setBadgeOptions:(unsigned long long)arg1 ;
-(void)setPreferedResourceName:(NSString *)arg1 ;
-(BOOL)templateVariant;
-(BOOL)selectedVariant;
-(void)setSelectedVariant:(BOOL)arg1 ;
-(BOOL)drawBadge;
-(void)setDrawBadge:(BOOL)arg1 ;
-(CGSize)sanitizedSize;
-(double)sanitizedScale;
-(unsigned long long)languageDirection;
-(void)setLanguageDirection:(unsigned long long)arg1 ;
-(BOOL)preferExtendedColorResources;
-(void)setPreferExtendedColorResources:(BOOL)arg1 ;
@end

