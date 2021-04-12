/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UIFontDescriptor, NSAttributedString, NSArray;

@interface _UIFontPickerFontInfo : NSObject {

	NSString* _familyName;
	NSString* _styleName;
	NSString* _localizedFamilyName;
	NSString* _localizedStyleName;
	double _lineHeight;
	UIFontDescriptor* _fontDescriptor;
	NSAttributedString* _attributedString;
	NSString* _attributedStringContentSize;
	unsigned long long _hasMultipleFaces;
	NSArray* _subInfos;
	NSString* _postscriptName;

}

@property (readonly) NSString * familyName;                                              //@synthesize familyName=_familyName - In the implementation block
@property (readonly) NSString * postscriptName;                                          //@synthesize postscriptName=_postscriptName - In the implementation block
@property (readonly) NSString * styleName;                                               //@synthesize styleName=_styleName - In the implementation block
@property (readonly) double lineHeight; 
@property (readonly) NSAttributedString * attributedString; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * localizedFamilyName; 
@property (readonly) UIFontDescriptor * fontDescriptor; 
@property (getter=isFontFamilyAvailable,readonly) BOOL fontFamilyAvailable; 
@property (readonly) BOOL hasMultipleFaces; 
@property (readonly) NSArray * faces; 
@property (readonly) _UIFontPickerFontInfo * familyInfo; 
+(id)infoWithFamilyName:(id)arg1 ;
+(id)infoWithFontDescriptor:(CTFontDescriptorRef)arg1 ;
-(NSString *)familyName;
-(NSString *)localizedName;
-(NSArray *)faces;
-(NSAttributedString *)attributedString;
-(NSString *)styleName;
-(_UIFontPickerFontInfo *)familyInfo;
-(NSString *)postscriptName;
-(id)initWithFamilyName:(id)arg1 ;
-(id)initWithFontDescriptor:(id)arg1 ;
-(id)_sortedFacesByWeight;
-(void)_populateLocalizedNamesIfNecessary;
-(BOOL)matchesTraits:(unsigned)arg1 ;
-(id)_fontStringForTraitCollection:(id)arg1 ;
-(void)_updateAttributedStringIfNeeded;
-(BOOL)matchesLanguages:(id)arg1 ;
-(BOOL)hasMultipleFaces;
-(BOOL)matchesFamilyForFontDescriptor:(id)arg1 ;
-(BOOL)matchesFontDescriptor:(id)arg1 ;
-(BOOL)isFontFamilyAvailable;
-(NSString *)localizedFamilyName;
-(BOOL)matchesConfiguration:(id)arg1 ;
-(id)faceMatchingDescriptor:(id)arg1 ;
-(id)description;
-(double)lineHeight;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(UIFontDescriptor *)fontDescriptor;
@end

