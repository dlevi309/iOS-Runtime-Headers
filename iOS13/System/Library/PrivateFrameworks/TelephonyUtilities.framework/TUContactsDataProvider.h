/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUContactsDataSource;
@class TUContactsDataProviderIgnoredHandles;

@interface TUContactsDataProvider : NSObject {

	BOOL _useAsianNameFormat;
	/*^block*/id _localeSupportsPrefixHintForFetchRequest;
	id<TUContactsDataSource> _contactsDataSource;
	TUContactsDataProviderIgnoredHandles* _ignoredHandles;

}

@property (assign,nonatomic) BOOL useAsianNameFormat;                                          //@synthesize useAsianNameFormat=_useAsianNameFormat - In the implementation block
@property (nonatomic,copy) id localeSupportsPrefixHintForFetchRequest;                         //@synthesize localeSupportsPrefixHintForFetchRequest=_localeSupportsPrefixHintForFetchRequest - In the implementation block
@property (nonatomic,readonly) id<TUContactsDataSource> contactsDataSource;                    //@synthesize contactsDataSource=_contactsDataSource - In the implementation block
@property (nonatomic,copy) TUContactsDataProviderIgnoredHandles * ignoredHandles;              //@synthesize ignoredHandles=_ignoredHandles - In the implementation block
+(id)numberFormatter;
+(id)asianLocaleCountryCodes;
+(id)unsupportedLocalesForPrefixHint;
+(id)defaultContactKeyDescriptors;
+(id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1 ;
-(id)init;
-(id)executeFetchRequest:(id)arg1 ;
-(id)initWithContactsDataSource:(id)arg1 ;
-(id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4 ;
-(id)compositeNameForContacts:(id)arg1 ;
-(id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 ;
-(id)unifiedContactsForFetchRequest:(id)arg1 countryCode:(id)arg2 ;
-(int)personIDForContact:(id)arg1 ;
-(id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3 ;
-(id)compositeNameForHandles:(id)arg1 countryCode:(id)arg2 ;
-(id)labeledHandlesForContacts:(id)arg1 ;
-(id<TUContactsDataSource>)contactsDataSource;
-(TUContactsDataProviderIgnoredHandles *)ignoredHandles;
-(id)prefixHintForFetchRequest:(id)arg1 ;
-(BOOL)useAsianNameFormat;
-(id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2 ;
-(id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2 ;
-(id)localeSupportsPrefixHintForFetchRequest;
-(id)labeledHandlesForContactWithIdentifier:(id)arg1 ;
-(void)setUseAsianNameFormat:(BOOL)arg1 ;
-(void)setLocaleSupportsPrefixHintForFetchRequest:(id)arg1 ;
-(void)setIgnoredHandles:(TUContactsDataProviderIgnoredHandles *)arg1 ;
@end

