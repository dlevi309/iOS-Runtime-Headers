/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <libobjc.A.dylib/TFFeedbackDataWritable.h>
#import <libobjc.A.dylib/TFFeedbackDataSource.h>

@protocol TFFeedbackDataContainerObserver, OS_dispatch_queue;
@class NSString, NSMutableSet, NSMutableDictionary, NSMutableArray, NSObject;

@interface TFFeedbackDataContainer : NSObject <TFFeedbackDataWritable, TFFeedbackDataSource> {

	id<TFFeedbackDataContainerObserver> _observer;
	NSString* _name;
	NSMutableSet* _includedGroupIdentifiers;
	NSMutableSet* _loadingEntryIdentifiers;
	NSMutableDictionary* _stringEntryMap;
	NSMutableDictionary* _numberEntryMap;
	NSMutableDictionary* _imageCollectionEntryMap;
	NSMutableArray* _dirtyGroupIdentifiers;
	NSMutableArray* _dirtyEntryIdentifiers;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) NSMutableSet * includedGroupIdentifiers;                        //@synthesize includedGroupIdentifiers=_includedGroupIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loadingEntryIdentifiers;                         //@synthesize loadingEntryIdentifiers=_loadingEntryIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * stringEntryMap;                           //@synthesize stringEntryMap=_stringEntryMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * numberEntryMap;                           //@synthesize numberEntryMap=_numberEntryMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * imageCollectionEntryMap;                  //@synthesize imageCollectionEntryMap=_imageCollectionEntryMap - In the implementation block
@property (nonatomic,readonly) NSMutableArray * dirtyGroupIdentifiers;                         //@synthesize dirtyGroupIdentifiers=_dirtyGroupIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * dirtyEntryIdentifiers;                         //@synthesize dirtyEntryIdentifiers=_dirtyEntryIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic,__weak) id<TFFeedbackDataContainerObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(id<TFFeedbackDataContainerObserver>)arg1 ;
-(id<TFFeedbackDataContainerObserver>)observer;
-(BOOL)isLoading;
-(NSString *)debugDescription;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)objectForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringForIdentifier:(id)arg1 toValue:(id)arg2 ;
-(void)setNumberForIdentifier:(id)arg1 toValue:(id)arg2 ;
-(id)stringForIdentifier:(id)arg1 ;
-(id)numberForIdentifier:(id)arg1 ;
-(BOOL)isGroupWithIdentifierIncluded:(id)arg1 ;
-(id)imageCollectionForIdentifer:(id)arg1 ;
-(void)setEntryLoadingForIdentifier:(id)arg1 toValue:(BOOL)arg2 ;
-(void)overwriteWithContentsOfDataContainer:(id)arg1 ;
-(id)initWithName:(id)arg1 includedGroupIdentifiers:(id)arg2 loadingEntryIdentifiers:(id)arg3 stringEntryMap:(id)arg4 numberEntryMap:(id)arg5 imageCollectionEntryMap:(id)arg6 dirtyGroupIdentifiers:(id)arg7 dirtyEntryIdentifiers:(id)arg8 ;
-(NSMutableSet *)includedGroupIdentifiers;
-(NSMutableSet *)loadingEntryIdentifiers;
-(NSMutableDictionary *)stringEntryMap;
-(NSMutableDictionary *)numberEntryMap;
-(NSMutableDictionary *)imageCollectionEntryMap;
-(NSMutableArray *)dirtyGroupIdentifiers;
-(NSMutableArray *)dirtyEntryIdentifiers;
-(void)setGroupInclusionForIdentifier:(id)arg1 toValue:(BOOL)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 suppressingNotifications:(BOOL)arg2 ;
-(void)_clearDirtyIdentifiers;
-(void)_notifyObserverOfUpdates;
-(void)_markGroupIdentifierDirty:(id)arg1 ;
-(void)_markEntryIdentifierDirty:(id)arg1 ;
-(void)setImageCollectionForIdentifier:(id)arg1 toValue:(id)arg2 ;
-(BOOL)isEntryWithIdentifierLoading:(id)arg1 ;
-(void)prepareInitialValuesForForm:(id)arg1 ;
@end

