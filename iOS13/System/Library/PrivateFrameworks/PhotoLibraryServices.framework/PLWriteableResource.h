/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)version;
-(void)setVersion:(unsigned)arg1;
-(float)scale;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1;
-(void)setScale:(float)arg1;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1;
-(id<PLResourceDataStore>)dataStore;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(void)setRemoteAvailability:(short)arg1;
-(short)remoteAvailability;
-(void)setUnorientedHeight:(long long)arg1;
-(void)setUnorientedWidth:(long long)arg1;
-(void)setQualitySortValue:(int)arg1;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(void)setDataStoreSubtype:(long long)arg1;
-(void)setUniformTypeIdentifierID:(id)arg1;
-(void)setDataStore:(id)arg1;
-(void)setDataStoreKey:(id)arg1;
-(void)setCodecID:(id)arg1;
-(long long)dataStoreSubtype;

@end

