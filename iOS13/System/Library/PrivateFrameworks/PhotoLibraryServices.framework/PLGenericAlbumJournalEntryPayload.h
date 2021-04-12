/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSNumber, NSData, NSDate;

@interface PLGenericAlbumJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * cloudGUID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL customSortAscending; 
@property (nonatomic,readonly) int customSortKey; 
@property (nonatomic,readonly) NSString * customKeyAssetUUID; 
@property (nonatomic,readonly) NSString * importSessionID; 
@property (nonatomic,retain) NSData * userQueryData; 
@property (nonatomic,readonly) NSDate * creationDate; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
-(NSString *)title;
-(NSNumber *)kind;
-(NSDate *)creationDate;
-(BOOL)isPinned;
-(BOOL)isInTrash;
-(NSString *)cloudGUID;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(NSString *)importSessionID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)customSortAscending;
-(int)customSortKey;
-(NSData *)userQueryData;
-(void)setUserQueryData:(NSData *)arg1 ;
-(NSString *)customKeyAssetUUID;
@end

