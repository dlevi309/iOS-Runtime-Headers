/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontFamilyProvider.h>

@class NSArray, NSString;

@interface SXSystemFontFamilyProvider : NSObject <SXFontFamilyProvider> {

	NSArray* _fonts;

}

@property (nonatomic,readonly) NSArray * fonts;                     //@synthesize fonts=_fonts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)fonts;
-(id)init;
-(id)fontFamilies;
-(NSString *)description;
-(id)initWithFontMetaData:(id)arg1 ;
-(id)fontsForMetadata:(id)arg1 ;
@end

