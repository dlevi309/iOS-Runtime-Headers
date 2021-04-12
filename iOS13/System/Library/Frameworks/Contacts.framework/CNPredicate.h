/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSPredicate.h>
#import <libobjc.A.dylib/CNDonatedContactsPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSArray, NSString;

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {

	NSPredicate* _cn_predicate;
	BOOL _augmentMainStoreResults;
	NSArray* _mainStoreContactIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * mainStoreContactIdentifiers;              //@synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL augmentMainStoreResults;                       //@synthesize augmentMainStoreResults=_augmentMainStoreResults - In the implementation block
+(id)os_log;
+(id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(BOOL)arg3 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(id)shortDebugDescription;
-(BOOL)augmentMainStoreResults;
-(NSArray *)mainStoreContactIdentifiers;
-(void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3 ;
-(id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(BOOL)arg3 service:(id)arg4 error:(id*)arg5 ;
-(void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2 ;
-(void)setMainStoreContactIdentifiers:(NSArray *)arg1 ;
-(id)cn_predicate;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(void)setAugmentMainStoreResults:(BOOL)arg1 ;
-(id)contactsFromDonationStore:(id)arg1 ;
@end

