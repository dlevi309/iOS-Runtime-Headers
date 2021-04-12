/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSSet;


@protocol PGGraphUpdateInventory <NSObject>
@property (nonatomic,readonly) long long updateType; 
@property (assign,nonatomic) BOOL isResumingFullAnalysis; 
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
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
@required
-(long long)updateType;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(BOOL)arg2;
-(id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(BOOL)arg3;
-(BOOL)isResumingFullAnalysis;
-(void)setIsResumingFullAnalysis:(BOOL)arg1;
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

@end

