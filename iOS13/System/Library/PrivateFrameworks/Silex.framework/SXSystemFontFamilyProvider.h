/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(NSArray *)fonts;
-(id)fontFamilies;
-(id)initWithFontMetaData:(id)arg1 ;
-(id)fontsForMetadata:(id)arg1 ;
@end

