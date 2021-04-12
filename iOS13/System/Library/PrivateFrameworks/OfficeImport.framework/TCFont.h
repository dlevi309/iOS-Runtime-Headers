/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(TCFontFamily *)family;
-(void)setFamily:(TCFontFamily *)arg1 ;
-(TCFontStyling)styling;
-(int)preferredLanguage;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(NSString *)psName;
-(id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(TCFontStyling)arg3 ;
-(id)englishName;
-(id)localizedFontName;
@end

