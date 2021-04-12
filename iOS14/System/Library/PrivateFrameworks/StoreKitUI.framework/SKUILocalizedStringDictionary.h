/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject {

	NSArray* _bundles;
	NSMutableArray* _stringTables;
	NSString* _localeName;

}

@property (nonatomic,readonly) NSString * localeName;              //@synthesize localeName=_localeName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)_stringTableForBundle:(id)arg1 tableName:(id)arg2 ;
-(id)initWithLocaleName:(id)arg1 bundles:(id)arg2 ;
-(NSString *)localeName;
@end

