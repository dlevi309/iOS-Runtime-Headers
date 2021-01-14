/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicateFormat;
-(id)initWithPredicate:(id)arg1 ;
-(id)shortDebugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(NSString *)description;
-(BOOL)augmentMainStoreResults;
-(NSArray *)mainStoreContactIdentifiers;
-(id)cn_predicate;
-(void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2 ;
-(void)setMainStoreContactIdentifiers:(NSArray *)arg1 ;
-(/*^block*/id)cn_resultTransformWithMatchInfos:(id)arg1 ;
-(void)setAugmentMainStoreResults:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)contactsFromDonationStore:(id)arg1 ;
@end

