/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)initWithURL:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(void)setLocalizationDictionary:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizationDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(void)dealloc;
@end

