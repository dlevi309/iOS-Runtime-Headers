/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphUpdateInventory.h>

@class NSSet, NSMutableDictionary, PGManager, NSMutableArray, PGGraph, NSMutableSet, PGGraphUpdateRelatedDetails, NSDictionary, NSString;

@interface PGGraphUpdate : NSObject <PGGraphUpdateInventory> {

	NSMutableDictionary* _registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
	NSMutableDictionary* _registeredResolvableItemsByBusinessItemMuid;
	BOOL _isResumingFullAnalysis;
	BOOL _hasDeletedMomentNodes;
	BOOL _hasDeletedHighlightNodes;
	BOOL _hasUpdatedPersonNodes;
	BOOL _hasDeletedPersonNodes;
	long long _updateType;
	PGManager* _manager;
	NSMutableArray* _inputChanges;
	NSSet* _consolidatedChanges;
	NSMutableDictionary* _updateMomentNodesByUpdateType;
	NSMutableDictionary* _updateHighlightNodesByUpdateType;
	NSMutableDictionary* _mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
	PGGraph* _graph;
	NSSet* _localIdentifiersOfMomentsToInsert;
	NSSet* _localIdentifiersOfMomentsToDelete;
	NSSet* _localIdentifiersOfMomentsToUpdate;
	NSMutableDictionary* _momentByMomentLocalIdentifier;
	NSMutableSet* _deletedMomentLocalIdentfiersForValidityCheck;
	NSMutableSet* _deletedHighlightLocalIdentfiersForValidityCheck;
	NSSet* _momentsToIngest;
	NSSet* _insertedMomentNodes;
	unsigned long long _momentUpdateTypes;
	NSSet* _additionalLocationsToPrefetch;
	NSSet* _insertedAndUpdatedPersonNodes;
	NSMutableDictionary* _highlightByHighlightLocalIdentifier;
	NSMutableDictionary* _highlightsToInsertByHighlightKind;
	NSMutableSet* _localIdentifiersOfDeletedHighlights;
	NSSet* _localIdentifiersOfPersonsToInsert;
	NSSet* _localIdentifiersOfPersonsToDelete;
	NSSet* _localIdentifiersOfPersonsToUpdate;
	PGGraphUpdateRelatedDetails* _relatedDetails;
	NSSet* _localIdentifiersOfHighlightsToInsert;
	NSSet* _localIdentifiersOfHighlightsToDelete;
	NSSet* _localIdentifiersOfHighlightsToUpdate;
	NSSet* _insertedHighlightNodes;
	NSSet* _insertedHighlightDayGroupNodes;

}

@property (nonatomic,readonly) NSMutableArray * inputChanges;                                                                                //@synthesize inputChanges=_inputChanges - In the implementation block
@property (nonatomic,readonly) NSSet * consolidatedChanges;                                                                                  //@synthesize consolidatedChanges=_consolidatedChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * updateMomentNodesByUpdateType;                                                          //@synthesize updateMomentNodesByUpdateType=_updateMomentNodesByUpdateType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * updateHighlightNodesByUpdateType;                                                       //@synthesize updateHighlightNodesByUpdateType=_updateHighlightNodesByUpdateType - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;              //@synthesize mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier=_mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * highlightByHighlightLocalIdentifier;                                                    //@synthesize highlightByHighlightLocalIdentifier=_highlightByHighlightLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * highlightsToInsertByHighlightKind;                                                      //@synthesize highlightsToInsertByHighlightKind=_highlightsToInsertByHighlightKind - In the implementation block
@property (nonatomic,readonly) NSMutableSet * localIdentifiersOfDeletedHighlights;                                                           //@synthesize localIdentifiersOfDeletedHighlights=_localIdentifiersOfDeletedHighlights - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedMomentLocalIdentfiersForValidityCheck;                                                  //@synthesize deletedMomentLocalIdentfiersForValidityCheck=_deletedMomentLocalIdentfiersForValidityCheck - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedHighlightLocalIdentfiersForValidityCheck;                                               //@synthesize deletedHighlightLocalIdentfiersForValidityCheck=_deletedHighlightLocalIdentfiersForValidityCheck - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * momentByMomentLocalIdentifier;                                                          //@synthesize momentByMomentLocalIdentifier=_momentByMomentLocalIdentifier - In the implementation block
@property (nonatomic,readonly) PGManager * manager;                                                                                          //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) PGGraph * graph;                                                                                                //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) long long updateType;                                                                                           //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,readonly) NSSet * momentsToIngest;                                                                                      //@synthesize momentsToIngest=_momentsToIngest - In the implementation block
@property (nonatomic,copy) NSSet * additionalLocationsToPrefetch;                                                                            //@synthesize additionalLocationsToPrefetch=_additionalLocationsToPrefetch - In the implementation block
@property (nonatomic,readonly) NSDictionary * registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;                            //@synthesize registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier=_registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * registeredResolvableItemsByBusinessItemMuid;                                                   //@synthesize registeredResolvableItemsByBusinessItemMuid=_registeredResolvableItemsByBusinessItemMuid - In the implementation block
@property (nonatomic,readonly) NSSet * insertedAndUpdatedPersonNodes;                                                                        //@synthesize insertedAndUpdatedPersonNodes=_insertedAndUpdatedPersonNodes - In the implementation block
@property (nonatomic,copy) NSSet * insertedMomentNodes;                                                                                      //@synthesize insertedMomentNodes=_insertedMomentNodes - In the implementation block
@property (nonatomic,copy) NSSet * insertedHighlightNodes;                                                                                   //@synthesize insertedHighlightNodes=_insertedHighlightNodes - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedMomentNodes;                                                                                     //@synthesize hasDeletedMomentNodes=_hasDeletedMomentNodes - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedHighlightNodes;                                                                                  //@synthesize hasDeletedHighlightNodes=_hasDeletedHighlightNodes - In the implementation block
@property (assign,nonatomic) BOOL hasDeletedPersonNodes;                                                                                     //@synthesize hasDeletedPersonNodes=_hasDeletedPersonNodes - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedPersonNodes;                                                                                     //@synthesize hasUpdatedPersonNodes=_hasUpdatedPersonNodes - In the implementation block
@property (nonatomic,readonly) PGGraphUpdateRelatedDetails * relatedDetails;                                                                 //@synthesize relatedDetails=_relatedDetails - In the implementation block
@property (nonatomic,readonly) NSSet * highlightDaysToIngest; 
@property (nonatomic,readonly) NSSet * highlightDayGroupsToIngest; 
@property (nonatomic,copy) NSSet * insertedHighlightDayGroupNodes;                                                                           //@synthesize insertedHighlightDayGroupNodes=_insertedHighlightDayGroupNodes - In the implementation block
@property (nonatomic,readonly) BOOL hasAnythingToDo; 
@property (nonatomic,readonly) BOOL isSignificant; 
@property (nonatomic,readonly) BOOL hasInsertedMomentNodes; 
@property (nonatomic,readonly) BOOL hasUpdatedMomentNodes; 
@property (nonatomic,readonly) BOOL hasInsertedHighlightNodes; 
@property (nonatomic,readonly) BOOL hasUpdatedHighlightNodes; 
@property (nonatomic,readonly) unsigned long long momentUpdateTypes;                                                                         //@synthesize momentUpdateTypes=_momentUpdateTypes - In the implementation block
@property (nonatomic,readonly) BOOL didProcessNodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isResumingFullAnalysis;                                                                                    //@synthesize isResumingFullAnalysis=_isResumingFullAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL hasMomentsToInsert; 
@property (nonatomic,readonly) BOOL hasMomentsToDelete; 
@property (nonatomic,readonly) BOOL hasMomentsToUpdate; 
@property (nonatomic,readonly) BOOL hasHighlightsToInsert; 
@property (nonatomic,readonly) BOOL hasHighlightsToDelete; 
@property (nonatomic,readonly) BOOL hasHighlightsToUpdate; 
@property (nonatomic,readonly) BOOL hasHighlightDayGroupsToInsert; 
@property (nonatomic,readonly) BOOL hasPersonsToInsert; 
@property (nonatomic,readonly) BOOL hasPersonsToDelete; 
@property (nonatomic,readonly) BOOL hasPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToInsert;                                                                    //@synthesize localIdentifiersOfMomentsToInsert=_localIdentifiersOfMomentsToInsert - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToDelete;                                                                    //@synthesize localIdentifiersOfMomentsToDelete=_localIdentifiersOfMomentsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToUpdate;                                                                    //@synthesize localIdentifiersOfMomentsToUpdate=_localIdentifiersOfMomentsToUpdate - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToInsert;                                                                 //@synthesize localIdentifiersOfHighlightsToInsert=_localIdentifiersOfHighlightsToInsert - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToDelete;                                                                 //@synthesize localIdentifiersOfHighlightsToDelete=_localIdentifiersOfHighlightsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToUpdate;                                                                 //@synthesize localIdentifiersOfHighlightsToUpdate=_localIdentifiersOfHighlightsToUpdate - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToInsert;                                                                    //@synthesize localIdentifiersOfPersonsToInsert=_localIdentifiersOfPersonsToInsert - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToDelete;                                                                    //@synthesize localIdentifiersOfPersonsToDelete=_localIdentifiersOfPersonsToDelete - In the implementation block
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToUpdate;                                                                    //@synthesize localIdentifiersOfPersonsToUpdate=_localIdentifiersOfPersonsToUpdate - In the implementation block
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
-(NSString *)description;
-(void)addChange:(id)arg1 ;
-(void)addChanges:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(PGManager *)manager;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(long long)updateType;
-(void)setUpdateType:(long long)arg1 ;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(BOOL)arg2 ;
-(id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(BOOL)arg3 ;
-(BOOL)isResumingFullAnalysis;
-(void)setIsResumingFullAnalysis:(BOOL)arg1 ;
-(BOOL)hasMomentsToInsert;
-(BOOL)hasMomentsToDelete;
-(BOOL)hasMomentsToUpdate;
-(BOOL)hasHighlightsToInsert;
-(BOOL)hasHighlightsToDelete;
-(BOOL)hasHighlightsToUpdate;
-(BOOL)hasHighlightDayGroupsToInsert;
-(BOOL)hasPersonsToInsert;
-(BOOL)hasPersonsToDelete;
-(BOOL)hasPersonsToUpdate;
-(NSSet *)localIdentifiersOfMomentsToInsert;
-(NSSet *)localIdentifiersOfMomentsToDelete;
-(NSSet *)localIdentifiersOfMomentsToUpdate;
-(NSSet *)localIdentifiersOfHighlightsToInsert;
-(NSSet *)localIdentifiersOfHighlightsToDelete;
-(NSSet *)localIdentifiersOfHighlightsToUpdate;
-(NSSet *)localIdentifiersOfPersonsToInsert;
-(NSSet *)localIdentifiersOfPersonsToDelete;
-(NSSet *)localIdentifiersOfPersonsToUpdate;
-(id)initWithManager:(id)arg1 updateType:(long long)arg2 ;
-(id)initWithManager:(id)arg1 updateType:(long long)arg2 graph:(id)arg3 ;
-(id)cachedDataModelObjectForGraphChange:(id)arg1 ;
-(BOOL)hasAnythingToDo;
-(BOOL)isSignificant;
-(BOOL)hasUpdatedPersonNodes;
-(unsigned long long)momentUpdateTypes;
-(NSSet *)momentsToIngest;
-(BOOL)didProcessNodes;
-(BOOL)hasInsertedMomentNodes;
-(BOOL)hasUpdatedMomentNodes;
-(BOOL)hasInsertedHighlightNodes;
-(BOOL)hasUpdatedHighlightNodes;
-(void)prepareForPostProcessing;
-(void)_registerMoments:(id)arg1 ;
-(void)_unregisterMomentsForMomentLocalIdentifiers:(id)arg1 ;
-(void)_consolidate;
-(id)_fetchMomentsWithMomentLocalIdentifiers:(id)arg1 ;
-(void)_consolidateIfNeeded;
-(void)enumerateConsolidatedChanges:(/*^block*/id)arg1 ;
-(void)updatedMomentNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2 ;
-(void)updatedHighlightNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2 ;
-(id)momentNodesToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeInsertedNodes:(BOOL)arg2 ;
-(void)registerLocationOfInterestVisitToResolve:(id)arg1 forMomentLocalIdentifier:(id)arg2 ;
-(void)registerPublicEventNode:(id)arg1 withConsolidatedAddress:(id)arg2 toResolveBusinessItemMuid:(unsigned long long)arg3 ;
-(void)registerInsertedAndUpdatedPersonNodes:(id)arg1 ;
-(void)clearInsertedAndUpdatedPersonNodes;
-(NSSet *)highlightDaysToIngest;
-(NSSet *)highlightDayGroupsToIngest;
-(void)_registerHighlights:(id)arg1 ;
-(void)_unregisterHighlightsForHighlightLocalIdentifiers:(id)arg1 ;
-(id)highlightForHighlightLocalIdentifier:(id)arg1 ;
-(id)_fetchedHighlightsWithHighlightLocalIdentifiers:(id)arg1 ;
-(NSMutableArray *)inputChanges;
-(NSSet *)consolidatedChanges;
-(NSMutableDictionary *)updateMomentNodesByUpdateType;
-(NSMutableDictionary *)updateHighlightNodesByUpdateType;
-(NSMutableDictionary *)mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
-(NSDictionary *)registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
-(NSDictionary *)registeredResolvableItemsByBusinessItemMuid;
-(NSMutableDictionary *)momentByMomentLocalIdentifier;
-(NSMutableSet *)deletedMomentLocalIdentfiersForValidityCheck;
-(NSMutableSet *)deletedHighlightLocalIdentfiersForValidityCheck;
-(BOOL)hasDeletedMomentNodes;
-(void)setHasDeletedMomentNodes:(BOOL)arg1 ;
-(BOOL)hasDeletedHighlightNodes;
-(void)setHasDeletedHighlightNodes:(BOOL)arg1 ;
-(void)setHasUpdatedPersonNodes:(BOOL)arg1 ;
-(NSSet *)insertedMomentNodes;
-(void)setInsertedMomentNodes:(NSSet *)arg1 ;
-(NSSet *)additionalLocationsToPrefetch;
-(void)setAdditionalLocationsToPrefetch:(NSSet *)arg1 ;
-(NSSet *)insertedAndUpdatedPersonNodes;
-(NSMutableDictionary *)highlightByHighlightLocalIdentifier;
-(NSMutableDictionary *)highlightsToInsertByHighlightKind;
-(NSMutableSet *)localIdentifiersOfDeletedHighlights;
-(PGGraphUpdateRelatedDetails *)relatedDetails;
-(BOOL)hasDeletedPersonNodes;
-(void)setHasDeletedPersonNodes:(BOOL)arg1 ;
-(NSSet *)insertedHighlightNodes;
-(void)setInsertedHighlightNodes:(NSSet *)arg1 ;
-(NSSet *)insertedHighlightDayGroupNodes;
-(void)setInsertedHighlightDayGroupNodes:(NSSet *)arg1 ;
@end

