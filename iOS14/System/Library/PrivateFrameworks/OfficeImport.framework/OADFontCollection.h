/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(id)init;
-(id)description;
-(id)scripts;
-(BOOL)isEmpty;
-(id)fontForScript:(id)arg1 ;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
@end

