/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSSet;

@interface CNContactChangesFetcher : NSObject {

	BOOL _unify;
	NSSet* _identifiers;
	NSSet* _keysToFetch;

}

@property (nonatomic,retain) NSSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * keysToFetch;              //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                       //@synthesize unify=_unify - In the implementation block
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(NSSet *)keysToFetch;
-(void)setKeysToFetch:(NSSet *)arg1 ;
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
@end

