/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSDictionary, NSBundle, NSString;

@interface SKUILocalizedStringTable : NSObject {

	NSDictionary* _strings;
	NSBundle* _bundle;
	NSString* _tableName;

}

@property (nonatomic,readonly) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSBundle *)bundle;
-(id)localizedStringForKey:(id)arg1 ;
-(NSString *)tableName;
-(id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3 ;
-(id)_legacyLanguageNameForLanguageCode:(id)arg1 ;
@end

