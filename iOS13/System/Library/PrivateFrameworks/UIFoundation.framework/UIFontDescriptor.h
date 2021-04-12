/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)_createMungledDictionary:(id)arg1 ;
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)_attributes;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(NSDictionary *)fontAttributes;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(unsigned)symbolicTraits;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(CGAffineTransform)matrix;
-(double)pointSize;
-(id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFontAttributes:(id)arg1 ;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 mask:(unsigned)arg2 ;
-(NSString *)postscriptName;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)fontDescriptorWithDesign:(id)arg1 ;
-(id)_visibleName;
@end

