/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUNoCopyDictionary, NSMutableDictionary;

@interface TCImportFontCache : NSObject {

	OITSUNoCopyDictionary* mFontCache;
	NSMutableDictionary* mFontNameCache;

}

@property (nonatomic,readonly) NSMutableDictionary * fontNameCache; 
+(CGSize)stringSizeForText:(id)arg1 ctFontRef:(CTFontRef)arg2 ;
-(id)init;
-(void)dealloc;
-(CTFontRef)ctFontRefForKey:(id)arg1 ;
-(CTFontRef)fontRefForFontName:(id)arg1 size:(int)arg2 ;
-(CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2 ;
-(CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3 ;
-(NSMutableDictionary *)fontNameCache;
@end

