/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLWriteableResource <PLResource>
@property (assign,nonatomic) unsigned resourceType; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned recipeID; 
@property (assign,nonatomic) unsigned orientation; 
@property (nonatomic,retain) id<PLResourceDataStore> dataStore; 
@property (assign,nonatomic) long long dataStoreSubtype; 
@property (nonatomic,retain) id<PLResourceDataStoreKey> dataStoreKey; 
@property (assign,nonatomic) short remoteAvailability; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) long long unorientedWidth; 
@property (assign,nonatomic) long long unorientedHeight; 
@property (assign,nonatomic) int qualitySortValue; 
@property (nonatomic,retain) id<PLCodecIdentity> codecID; 
@property (nonatomic,retain) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@required
-(id<PLResourceDataStore>)dataStore;
-(id<PLCodecIdentity>)codecID;
-(int)qualitySortValue;
-(long long)unorientedHeight;
-(void)setUniformTypeIdentifierID:(id)arg1;
-(void)setUnorientedHeight:(long long)arg1;
-(void)setRecipeID:(unsigned)arg1;
-(void)setUnorientedWidth:(long long)arg1;
-(void)setResourceType:(unsigned)arg1;
-(long long)unorientedWidth;
-(unsigned)resourceType;
-(void)setDataStoreKey:(id)arg1;
-(void)setQualitySortValue:(int)arg1;
-(void)setCodecID:(id)arg1;
-(void)setRemoteAvailability:(short)arg1;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(float)scale;
-(unsigned)recipeID;
-(short)remoteAvailability;
-(void)setDataStore:(id)arg1;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(void)setDataStoreSubtype:(long long)arg1;
-(void)setScale:(float)arg1;
-(unsigned)orientation;
-(void)setVersion:(unsigned)arg1;
-(unsigned)version;
-(long long)dataStoreSubtype;
-(void)setOrientation:(unsigned)arg1;

@end

