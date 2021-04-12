/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSArray, NSString;

@interface CNCollation : NSObject {

	BOOL _indexExtraTokenizations;
	NSArray* _headerLanguages;
	NSArray* _indexSections;
	NSString* _searchTransform;
	NSString* _nameTransform;
	NSString* _searchCollatorIdentifier;
	NSString* _sortCollatorIdentifier;

}

@property (readonly) NSArray * headerLanguages;                        //@synthesize headerLanguages=_headerLanguages - In the implementation block
@property (readonly) NSArray * indexSections;                          //@synthesize indexSections=_indexSections - In the implementation block
@property (readonly) NSString * searchTransform;                       //@synthesize searchTransform=_searchTransform - In the implementation block
@property (readonly) NSString * nameTransform;                         //@synthesize nameTransform=_nameTransform - In the implementation block
@property (readonly) NSString * searchCollatorIdentifier;              //@synthesize searchCollatorIdentifier=_searchCollatorIdentifier - In the implementation block
@property (readonly) NSString * sortCollatorIdentifier;                //@synthesize sortCollatorIdentifier=_sortCollatorIdentifier - In the implementation block
@property (readonly) BOOL indexExtraTokenizations;                     //@synthesize indexExtraTokenizations=_indexExtraTokenizations - In the implementation block
+(id)sectionURL;
+(id)indexSectionsFromPropertyList:(id)arg1 ;
+(id)languageHeaderSectionsFromPropertyList:(id)arg1 collator:(UCollatorRef)arg2 ;
+(id)defaultSortCollatorIdentifier;
-(id)init;
-(id)initWithCollator:(UCollatorRef)arg1 ;
-(id)initWithCollator:(UCollatorRef)arg1 URL:(id)arg2 ;
-(NSArray *)headerLanguages;
-(NSArray *)indexSections;
-(NSString *)searchTransform;
-(NSString *)nameTransform;
-(NSString *)searchCollatorIdentifier;
-(NSString *)sortCollatorIdentifier;
-(BOOL)indexExtraTokenizations;
@end

