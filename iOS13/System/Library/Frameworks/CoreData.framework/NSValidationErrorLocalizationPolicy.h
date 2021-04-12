/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSBundle, NSString, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {

	NSURL* _url;
	NSBundle* _localizationBundle;
	NSString* _modelStringsFileName;
	NSDictionary* _localizationDictionary;
	BOOL _hasSetLocalizationDictionary;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
@end

