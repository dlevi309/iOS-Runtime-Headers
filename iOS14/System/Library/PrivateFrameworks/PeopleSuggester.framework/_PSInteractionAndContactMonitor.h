/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _CDInteractionStore, CNContactStore, NSMutableSet, NSSet;

@interface _PSInteractionAndContactMonitor : NSObject {

	_CDInteractionStore* _interactionStore;
	CNContactStore* _contactStore;
	NSMutableSet* _mutableContactIdsSeen;
	NSMutableSet* _mutableContactIdsInContactStore;

}

@property (retain) NSMutableSet * mutableContactIdsSeen;                            //@synthesize mutableContactIdsSeen=_mutableContactIdsSeen - In the implementation block
@property (retain) NSMutableSet * mutableContactIdsInContactStore;                  //@synthesize mutableContactIdsInContactStore=_mutableContactIdsInContactStore - In the implementation block
@property (nonatomic,copy,readonly) NSSet * contactIdsSeen; 
@property (nonatomic,copy,readonly) NSSet * contactIdsInContactStore; 
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;              //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                       //@synthesize contactStore=_contactStore - In the implementation block
-(CNContactStore *)contactStore;
-(_CDInteractionStore *)interactionStore;
-(void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2 ;
-(id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2 ;
-(NSSet *)contactIdsSeen;
-(void)setMutableContactIdsInContactStore:(NSMutableSet *)arg1 ;
-(NSSet *)contactIdsInContactStore;
-(void)setMutableContactIdsSeen:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableContactIdsInContactStore;
-(void)fetchAllContactIdsFromContactStore;
-(void)notifyWhenContactAddedToInteractionStore:(id)arg1 ;
-(NSMutableSet *)mutableContactIdsSeen;
-(void)notifyWhenContactStoreChanged;
@end

