/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSKAddedToDocumentContext : NSObject
+(id)movingContext;
+(id)unhidingContext;
+(id)unarchivingContext;
+(id)importingContextWithImporterID:(id)arg1 ;
+(id)importingMasterTemplateContextWithImporterID:(id)arg1 ;
+(id)pastingContext;
+(id)pastingMatchStyleContext;
+(id)dragMoveContext;
+(id)dragCopyContext;
+(id)insertingPrototypeContext;
+(id)undoDeleteContext;
+(id)exportFootnoteContext;
+(id)changeTrackingSubstorageForCopyContext;
-(BOOL)wasUnarchived;
-(BOOL)autoUpdateSmartFields;
-(id)importerID;
-(BOOL)wasImportedFromMasterTemplate;
-(CFDictionaryRef)tableIDMap;
-(void)setTableIDMap:(CFDictionaryRef)arg1 ;
-(BOOL)wasPasted;
-(BOOL)uniqueBookmarks;
-(BOOL)syncChanges;
-(BOOL)matchStyle;
-(BOOL)wasDragOperation;
-(BOOL)wasDragMoved;
-(BOOL)wasMoved;
-(id)undoContext;
-(BOOL)wasUnhidden;
-(BOOL)wasUndoDelete;
-(BOOL)exportingFootnotes;
-(BOOL)changeTrackingSubstorage;
-(BOOL)wasImported;
-(BOOL)invokeDOLC;
@end

