/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSDictionary, NSString, NSData;

@interface PLAssetJournalEntryPayloadResource : NSObject {

	NSDictionary* _payloadAttributes;

}

@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) unsigned dataStoreClassID; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSString * volumeUuidString; 
@property (nonatomic,readonly) NSData * bookmarkData; 
@property (nonatomic,readonly) NSString * bookmarkPath; 
@property (nonatomic,readonly) NSDictionary * payloadAttributes;              //@synthesize payloadAttributes=_payloadAttributes - In the implementation block
-(id)description;
-(unsigned)version;
-(unsigned)resourceType;
-(unsigned long long)cplType;
-(short)trashedState;
-(unsigned)recipeID;
-(NSString *)uniformTypeIdentifier;
-(id)fourCharCodeName;
-(unsigned)dataStoreClassID;
-(NSString *)volumeUuidString;
-(NSData *)bookmarkData;
-(id)initWithPayloadAttributes:(id)arg1 ;
-(id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(BOOL)arg2 ;
-(void)updateStoredResource:(id)arg1 ;
-(NSString *)bookmarkPath;
-(BOOL)isOriginalResource;
-(BOOL)isAdjusted;
-(BOOL)isReferenceResource;
-(NSDictionary *)payloadAttributes;
@end

