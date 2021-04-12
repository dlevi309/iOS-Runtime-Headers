/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(_CDInteractionStore *)interactionStore;
-(CNContactStore *)contactStore;
-(id)initWithInteractionStore:(id)arg1 contactStore:(id)arg2 ;
-(void)populateContactIdCachesWithMessageCache:(id)arg1 shareCache:(id)arg2 ;
-(NSSet *)contactIdsInContactStore;
-(NSSet *)contactIdsSeen;
-(NSMutableSet *)mutableContactIdsSeen;
-(void)setMutableContactIdsSeen:(NSMutableSet *)arg1 ;
-(void)notifyWhenContactAddedToInteractionStore:(id)arg1 ;
-(NSMutableSet *)mutableContactIdsInContactStore;
-(void)fetchAllContactIdsFromContactStore;
-(void)notifyWhenContactStoreChanged;
-(void)setMutableContactIdsInContactStore:(NSMutableSet *)arg1 ;
@end

