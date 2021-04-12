/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSArray, NSDictionary;

@interface CNContactRelationsDescriptionLabels : NSObject {

	NSArray* _preferredLanguages;
	NSArray* _standardLabels;
	NSArray* _standardLocaleSpecificLabels;
	NSArray* _extendedLabels;
	NSArray* _extendedLocaleSpecificLabels;
	NSDictionary* _localizedStringsByLabelKey;

}

@property (nonatomic,readonly) NSArray * preferredLanguages;                           //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,readonly) NSArray * standardLabels;                               //@synthesize standardLabels=_standardLabels - In the implementation block
@property (nonatomic,readonly) NSArray * standardLocaleSpecificLabels;                 //@synthesize standardLocaleSpecificLabels=_standardLocaleSpecificLabels - In the implementation block
@property (nonatomic,readonly) NSArray * extendedLabels;                               //@synthesize extendedLabels=_extendedLabels - In the implementation block
@property (nonatomic,readonly) NSArray * extendedLocaleSpecificLabels;                 //@synthesize extendedLocaleSpecificLabels=_extendedLocaleSpecificLabels - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStringsByLabelKey;              //@synthesize localizedStringsByLabelKey=_localizedStringsByLabelKey - In the implementation block
-(NSArray *)preferredLanguages;
-(NSArray *)standardLabels;
-(id)initWithPreferredLanguages:(id)arg1 standardLabels:(id)arg2 standardLocaleSpecificLabels:(id)arg3 extendedLabels:(id)arg4 extendedLocaleSpecificLabels:(id)arg5 localizedStringsByLabelKey:(id)arg6 ;
-(NSArray *)standardLocaleSpecificLabels;
-(NSArray *)extendedLabels;
-(NSArray *)extendedLocaleSpecificLabels;
-(NSDictionary *)localizedStringsByLabelKey;
@end

