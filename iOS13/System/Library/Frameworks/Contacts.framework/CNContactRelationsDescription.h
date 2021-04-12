/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNMultiValuePropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@protocol OS_dispatch_queue;
@class NSObject, CNContactRelationsDescriptionLabels, NSString;

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription> {

	NSObject*<OS_dispatch_queue> _generationQueue;
	CNContactRelationsDescriptionLabels* _cachedLabels;
	Class _provider;

}

@property (readonly) NSObject*<OS_dispatch_queue> generationQueue;                            //@synthesize generationQueue=_generationQueue - In the implementation block
@property (nonatomic,retain) CNContactRelationsDescriptionLabels * cachedLabels;              //@synthesize cachedLabels=_cachedLabels - In the implementation block
@property (nonatomic,readonly) Class provider;                                                //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(Class)provider;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isNonnull;
-(id)managedLabels;
-(id)localizedStringForLabel:(id)arg1 ;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(/*^block*/id)fromPlistTransform;
-(id)standardLabels;
-(Class)labeledValueClass;
-(/*^block*/id)plistTransform;
-(id)initWithLocalizationProvider:(Class)arg1 ;
-(id)_builtInStandardLabels;
-(void)_addLocalizedLabels:(id)arg1 fromLanguagePlist:(id)arg2 languageIdentifier:(id)arg3 toDictionary:(id)arg4 conflictInfo:(id)arg5 ;
-(id)_builtInExtendedLabels;
-(NSObject*<OS_dispatch_queue>)generationQueue;
-(CNContactRelationsDescriptionLabels *)cachedLabels;
-(id)labelsForPreferredLanguages:(id)arg1 ;
-(void)setCachedLabels:(CNContactRelationsDescriptionLabels *)arg1 ;
-(id)cachedLabelsForPreferredLanguages:(id)arg1 ;
-(id)standardLabelsWithOptions:(unsigned long long)arg1 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
@end

