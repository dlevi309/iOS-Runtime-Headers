/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSNumber, NSData, NSDate;

@interface PLGenericAlbumJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * cloudGUID; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) BOOL isPinned; 
@property (nonatomic,readonly) BOOL isPrototype; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL customSortAscending; 
@property (nonatomic,readonly) int customSortKey; 
@property (nonatomic,readonly) NSString * customKeyAssetUUID; 
@property (nonatomic,readonly) NSString * importSessionID; 
@property (nonatomic,retain) NSData * userQueryData; 
@property (nonatomic,readonly) NSDate * creationDate; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
-(BOOL)isPinned;
-(NSString *)cloudGUID;
-(NSString *)importSessionID;
-(NSString *)customKeyAssetUUID;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateAlbum:(id)arg1 includePendingChanges:(BOOL)arg2 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(NSNumber *)kind;
-(NSData *)userQueryData;
-(BOOL)isPrototype;
-(int)customSortKey;
-(void)setUserQueryData:(NSData *)arg1 ;
-(BOOL)customSortAscending;
-(NSDate *)creationDate;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(NSString *)title;
-(BOOL)isInTrash;
@end

