/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _attributes;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}

@property (nonatomic,readonly) NSString * postscriptName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) CGAffineTransform matrix; 
@property (nonatomic,readonly) unsigned symbolicTraits; 
@property (nonatomic,readonly) NSDictionary * fontAttributes; 
+(id)cnui_bodyFontDescriptor;
+(id)cnui_footnoteFontDescriptor;
+(BOOL)supportsSecureCoding;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)_createMungledDictionary:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 ;
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
-(CGAffineTransform)matrix;
-(id)initWithFontAttributes:(id)arg1 ;
-(id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(id)_visibleName;
-(id)_NSAffineTransform;
-(id)fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(id)init;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)postscriptName;
-(double)pointSize;
-(CGAffineTransform)_matrix;
-(id)_attributes;
-(id)description;
-(Class)classForCoder;
-(unsigned)symbolicTraits;
-(id)objectForKey:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 mask:(unsigned)arg2 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(id)fontDescriptorWithDesign:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSDictionary *)fontAttributes;
@end

