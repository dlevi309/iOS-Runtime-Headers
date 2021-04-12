/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNContactChangesObserver;
@class NSArray, CNContact;

@interface CNContactChangesObserverProxy : NSObject {

	BOOL _unify;
	id<CNContactChangesObserver> _observer;
	NSArray* _keysToFetch;
	CNContact* _contactSnapshot;

}

@property (assign,nonatomic,__weak) id<CNContactChangesObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                                                //@synthesize unify=_unify - In the implementation block
@property (nonatomic,retain) CNContact * contactSnapshot;                               //@synthesize contactSnapshot=_contactSnapshot - In the implementation block
-(id<CNContactChangesObserver>)observer;
-(void)setObserver:(id<CNContactChangesObserver>)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(CNContact *)contactSnapshot;
-(void)setContactSnapshot:(CNContact *)arg1 ;
@end

