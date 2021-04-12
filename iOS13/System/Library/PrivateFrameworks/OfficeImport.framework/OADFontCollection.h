/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(id)scripts;
-(id)fontForScript:(id)arg1 ;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
@end

