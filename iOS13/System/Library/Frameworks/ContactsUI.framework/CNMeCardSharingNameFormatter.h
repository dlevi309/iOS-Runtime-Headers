/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNMeCardSharingNameProvider;
@class NSPersonNameComponents, NSMutableDictionary;

@interface CNMeCardSharingNameFormatter : NSObject {

	id<CNMeCardSharingNameProvider> _nameProvider;
	NSPersonNameComponents* _nameComponents;
	NSMutableDictionary* _cachedFormattedNames;

}

@property (nonatomic,readonly) id<CNMeCardSharingNameProvider> nameProvider;              //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents;                   //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedFormattedNames;                  //@synthesize cachedFormattedNames=_cachedFormattedNames - In the implementation block
+(id)formattedNameFromComponents:(id)arg1 forProvider:(id)arg2 withFormat:(unsigned long long)arg3 ;
+(id)nameComponentsFromProvider:(id)arg1 ;
+(id)formattedNameFromProvider:(id)arg1 withFormat:(unsigned long long)arg2 ;
-(NSPersonNameComponents *)nameComponents;
-(id<CNMeCardSharingNameProvider>)nameProvider;
-(id)initWithNameProvider:(id)arg1 ;
-(id)formattedNameWithFormat:(unsigned long long)arg1 ;
-(NSMutableDictionary *)cachedFormattedNames;
-(void)setCachedFormattedNames:(NSMutableDictionary *)arg1 ;
@end

