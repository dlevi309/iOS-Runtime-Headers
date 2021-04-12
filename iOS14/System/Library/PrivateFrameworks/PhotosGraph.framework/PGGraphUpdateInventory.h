/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(BOOL)arg3;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(BOOL)arg2;
-(NSSet *)localIdentifiersOfPersonsToUpdate;
-(BOOL)hasHighlightsToDelete;
-(BOOL)hasPersonsToUpdate;
-(NSSet *)localIdentifiersOfHighlightsToInsert;
-(NSSet *)localIdentifiersOfPersonsToInsert;
-(NSSet *)localIdentifiersOfMomentsToUpdate;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(NSSet *)localIdentifiersOfMomentsToInsert;
-(BOOL)isResumingFullAnalysis;
-(long long)updateType;
-(BOOL)hasPersonsToInsert;
-(NSSet *)localIdentifiersOfPersonsToDelete;
-(void)setIsResumingFullAnalysis:(BOOL)arg1;
-(NSSet *)localIdentifiersOfHighlightsToUpdate;
-(BOOL)hasMomentsToUpdate;
-(BOOL)hasMomentsToDelete;
-(NSSet *)localIdentifiersOfHighlightsToDelete;
-(BOOL)hasHighlightDayGroupsToInsert;
-(BOOL)hasHighlightsToInsert;
-(NSSet *)localIdentifiersOfMomentsToDelete;
-(BOOL)hasPersonsToDelete;
-(BOOL)hasMomentsToInsert;
-(BOOL)hasHighlightsToUpdate;

@end

