/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSDictionary, NSSQLSavePlan, NSFaultHandler, NSSet, NSMutableDictionary, NSString, NSSQLRowCache, NSSQLModel, NSSaveChangesRequest;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {

	NSDictionary* _metadataToWrite;
	NSSQLSavePlan* _savePlan;
	NSFaultHandler* _faultHandler;
	NSSet* _objectIDsInsertUpdatedToPruneDATrigger;
	NSSet* _objectIDsUpdatedToPruneDATrigger;
	NSSet* _objectIDsToPruneTrigger;
	NSMutableDictionary* _originalCachedRows;
	NSMutableDictionary* _updateMasksForHistoryTracking;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;
	NSSQLRowCache* _primaryRowCache;
	NSSQLRowCache* _contextGenerationRowCache;

}

@property (nonatomic,readonly) NSDictionary * metadataToWrite;                          //@synthesize metadataToWrite=_metadataToWrite - In the implementation block
@property (nonatomic,readonly) NSSQLSavePlan * savePlan;                                //@synthesize savePlan=_savePlan - In the implementation block
@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) NSSaveChangesRequest * request; 
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                           //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * originalCachedRows;                //@synthesize originalCachedRows=_originalCachedRows - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;              //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                   //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                   //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
-(void)dealloc;
-(NSSQLModel *)model;
-(NSSaveChangesRequest *)request;
-(NSFaultHandler *)faultHandler;
-(NSString *)fileBackedFuturesDirectory;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(void)executePrologue;
-(NSString *)externalDataReferencesDirectory;
-(NSString *)externalDataLinksDirectory;
-(id)rowCache;
-(void)executeEpilogue;
-(NSSQLSavePlan *)savePlan;
-(BOOL)hasChangesForWriting;
-(NSDictionary *)metadataToWrite;
-(id)originalRowForObjectID:(id)arg1 ;
-(void)addDataMask:(id)arg1 forEntityKey:(id)arg2 ;
-(id)dataMaskForKey:(id)arg1 ;
-(void)setOriginalRow:(id)arg1 forObjectID:(id)arg2 ;
-(id)contextRowCache;
-(NSMutableDictionary *)originalCachedRows;
@end

