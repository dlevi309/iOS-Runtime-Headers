/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject <NSCopying> {

	NSDictionary* _namesByLanguage;
	NSString* _psName;
	TCFontFamily* _family;
	TCFontStyling _styling;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSString * psName;                           //@synthesize psName=_psName - In the implementation block
@property (nonatomic,readonly) TCFontStyling styling;                       //@synthesize styling=_styling - In the implementation block
@property (assign,nonatomic) TCFontFamily * family;                         //@synthesize family=_family - In the implementation block
+(id)fontWithFont:(id)arg1 ;
-(int)preferredLanguage;
-(TCFontStyling)styling;
-(id)initWithDictionary:(id)arg1 ;
-(TCFontFamily *)family;
-(id)description;
-(NSString *)psName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFamily:(TCFontFamily *)arg1 ;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(TCFontStyling)arg3 ;
-(id)englishName;
-(id)localizedFontName;
@end

