/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/

#import <InputContext/InputContext-Structs.h>
#import <libobjc.A.dylib/_ICLexiconManaging.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSMutableArray, _ICNamedEntityStore;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging, _ICFeedbackAccepting> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	opaque_pthread_mutex_t _contactsCallbackLock;
	opaque_pthread_mutex_t _namedEntityCallbackLock;
	NSArray* _sources;
	NSMutableDictionary* _contacts;
	NSMutableArray* _contactObservers;
	int _contactChangeCount;
	_ICNamedEntityStore* _namedEntityStore;
	int _contactLoadState;
	int _namedEntityLoadState;

}

@property (assign) int contactLoadState;                  //@synthesize contactLoadState=_contactLoadState - In the implementation block
@property (assign) int namedEntityLoadState;              //@synthesize namedEntityLoadState=_namedEntityLoadState - In the implementation block
+(unsigned long long)countWords:(id)arg1 ;
-(void)dealloc;
-(void)warmUp;
-(void)addContact:(id)arg1 ;
-(void)removeContact:(id)arg1 ;
-(id)initWithLexiconSources:(id)arg1 ;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)unloadLexicons;
-(void)hibernate;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)setupContacts;
-(void)handleContact:(id)arg1 ;
-(void)completeContacts;
-(void)setupRecentContacts;
-(void)handleRecentContact:(id)arg1 ;
-(void)completeRecentContacts;
-(void)setupNamedEntities;
-(void)handleNamedEntity:(id)arg1 ;
-(void)completeNamedEntities;
-(void)setupRecentNamedEntities;
-(void)handleRecentNamedEntity:(id)arg1 ;
-(void)completeRecentNamedEntities;
-(void)resetNamedEntities;
-(void)changeContactLoadingState:(int)arg1 ;
-(void)changeNamedEntityLoadingState:(int)arg1 ;
-(id)stateName:(int)arg1 ;
-(void)doLoadLexicon;
-(void)backgroundLoadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(int)contactLoadState;
-(int)namedEntityLoadState;
-(void)printLexiconToNSLog:(LXLexiconRef)arg1 ;
-(unsigned long long)getContactCount;
-(int)debugEntityLoadState;
-(void)setContactLoadState:(int)arg1 ;
-(void)setNamedEntityLoadState:(int)arg1 ;
@end

