/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_applyLargeVideoRecipeRefactorFixToExternalResource:(id)arg1 withAsset:(id)arg2 ;
-(unsigned long long)cplType;
-(unsigned)resourceType;
-(NSString *)volumeUuidString;
-(unsigned)recipeID;
-(short)trashedState;
-(NSData *)bookmarkData;
-(BOOL)isAdjusted;
-(NSString *)uniformTypeIdentifier;
-(id)initWithPayloadAttributes:(id)arg1 ;
-(NSString *)bookmarkPath;
-(id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(BOOL)arg2 ;
-(void)updateStoredResource:(id)arg1 ;
-(BOOL)isOriginalResource;
-(BOOL)isReferenceResource;
-(BOOL)isValidForRebuild;
-(NSDictionary *)payloadAttributes;
-(id)description;
-(id)fourCharCodeName;
-(unsigned)dataStoreClassID;
-(unsigned)version;
@end

