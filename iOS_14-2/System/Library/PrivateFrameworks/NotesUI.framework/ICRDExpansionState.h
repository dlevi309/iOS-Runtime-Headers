/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSMutableDictionary, NSManagedObjectContext, NSDictionary;

@interface ICRDExpansionState : NSObject {

	NSMutableDictionary* _expansionState;
	NSManagedObjectContext* _modernViewContext;
	NSManagedObjectContext* _legacyViewContext;

}

@property (nonatomic,retain) NSMutableDictionary * expansionState;                    //@synthesize expansionState=_expansionState - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * modernViewContext;              //@synthesize modernViewContext=_modernViewContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * legacyViewContext;              //@synthesize legacyViewContext=_legacyViewContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * archiveDictionary; 
+(id)sharedExpansionState;
-(id)init;
-(NSDictionary *)archiveDictionary;
-(NSMutableDictionary *)expansionState;
-(id)archivableIdentifierForItemIdentifier:(id)arg1 ;
-(id)identifierForArchivableIdentifier:(id)arg1 itemType:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 itemIdentifier:(id)arg2 itemType:(id)arg3 inContext:(id)arg4 ;
-(id)normalizedContext:(id)arg1 ;
-(id)itemTypeForItemIdentifier:(id)arg1 ;
-(id)normalizedItemIdentifier:(id)arg1 ;
-(void)applyArchiveDictionary:(id)arg1 ;
-(id)expandedObjectIDsInContext:(id)arg1 ;
-(BOOL)isSectionIdentiferExpanded:(id)arg1 inContext:(id)arg2 ;
-(void)expandItemIdentifier:(id)arg1 inContext:(id)arg2 ;
-(void)collapseItemIdentifier:(id)arg1 inContext:(id)arg2 ;
-(void)setExpansionState:(NSMutableDictionary *)arg1 ;
-(NSManagedObjectContext *)modernViewContext;
-(void)setModernViewContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)legacyViewContext;
-(void)setLegacyViewContext:(NSManagedObjectContext *)arg1 ;
@end

