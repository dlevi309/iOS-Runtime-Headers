/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

