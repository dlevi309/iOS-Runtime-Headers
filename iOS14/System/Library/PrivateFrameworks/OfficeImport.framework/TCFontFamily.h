/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary, NSArray;

@interface TCFontFamily : NSObject {

	NSDictionary* _namesByLanguage;
	NSArray* _members;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSArray * members;                           //@synthesize members=_members - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)members;
-(id)description;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(id)englishName;
-(id)bestMatchForStyling:(TCFontStyling)arg1 ;
-(id)regularVariant:(BOOL)arg1 ;
-(BOOL)allFamilyIsBold;
-(id)weightVariantsOfFont:(id)arg1 ;
-(unsigned long long)boldFontIndexInWeightVariants:(id)arg1 ;
-(unsigned long long)regularFontIndexInWeightVariants:(id)arg1 ;
-(BOOL)traitsAreAdditive;
-(id)initWithNamesByLanguage:(id)arg1 members:(id)arg2 ;
-(id)memberForPSName:(id)arg1 ;
-(id)memberForFullName:(id)arg1 ;
-(BOOL)allFamilyIsItalic;
-(id)variantByTogglingItalicOfFont:(id)arg1 ;
-(id)variantByAddingBoldToFont:(id)arg1 ;
-(id)variantByRemovingBoldFromFont:(id)arg1 ;
-(BOOL)doesAnyNonBoldVariantExistForFont:(id)arg1 ;
@end

