/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(void)setContactLoadState:(int)arg1 ;
-(void)warmUp;
-(void)handleContact:(id)arg1 ;
-(unsigned long long)getContactCount;
-(int)namedEntityLoadState;
-(void)setNamedEntityLoadState:(int)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)printLexiconToNSLog:(LXLexiconRef)arg1 ;
-(void)completeNamedEntities;
-(void)setupContacts;
-(id)loadLexicons:(/*^block*/id)arg1 ;
-(void)handleRecentNamedEntity:(id)arg1 ;
-(void)handleNamedEntity:(id)arg1 ;
-(void)completeRecentNamedEntities;
-(void)changeNamedEntityLoadingState:(int)arg1 ;
-(void)addContact:(id)arg1 ;
-(int)contactLoadState;
-(void)unloadLexicons;
-(int)debugEntityLoadState;
-(void)backgroundLoadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)resetNamedEntities;
-(void)completeContacts;
-(void)setupRecentNamedEntities;
-(void)setupRecentContacts;
-(void)changeContactLoadingState:(int)arg1 ;
-(id)stateName:(int)arg1 ;
-(id)initWithLexiconSources:(id)arg1 ;
-(void)removeContact:(id)arg1 ;
-(id)loadLexiconsUsingFilter:(/*^block*/id)arg1 ;
-(void)handleRecentContact:(id)arg1 ;
-(void)setupNamedEntities;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)completeRecentContacts;
-(void)doLoadLexicon;
-(void)dealloc;
@end

