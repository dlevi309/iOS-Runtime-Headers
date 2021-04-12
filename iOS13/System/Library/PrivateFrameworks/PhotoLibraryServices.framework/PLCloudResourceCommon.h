/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSManagedObjectID, NSString, CPLScopedIdentifier, NSDate;


@protocol PLCloudResourceCommon <NSObject>
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) NSString * assetUuid; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) unsigned long long sourceCplType; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (nonatomic,readonly) BOOL isLocallyAvailable; 
@property (nonatomic,readonly) unsigned long long fileSize; 
@property (nonatomic,retain,readonly) NSString * filePath; 
@property (nonatomic,retain,readonly) NSString * fingerprint; 
@property (nonatomic,retain,readonly) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,retain,readonly) NSString * utiString; 
@property (nonatomic,readonly) unsigned resourceRecipeID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (assign,nonatomic) short prefetchCount; 
@property (nonatomic,retain) NSDate * lastPrefetchDate; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * prunedAt; 
@required
-(unsigned long long)fileSize;
-(NSManagedObjectID *)objectID;
-(long long)width;
-(long long)height;
-(BOOL)isAvailable;
-(void)setIsAvailable:(BOOL)arg1;
-(NSString *)filePath;
-(unsigned long long)cplType;
-(void)setCloudLocalState:(short)arg1;
-(short)cloudLocalState;
-(CPLScopedIdentifier *)scopedIdentifier;
-(id)cplResourceIncludeFile:(BOOL)arg1;
-(NSString *)fingerprint;
-(BOOL)isLocallyAvailable;
-(void)setLastOnDemandDownloadDate:(id)arg1;
-(NSString *)utiString;
-(NSString *)assetUuid;
-(unsigned long long)sourceCplType;
-(unsigned)resourceRecipeID;
-(short)prefetchCount;
-(void)setPrefetchCount:(short)arg1;
-(NSDate *)lastPrefetchDate;
-(void)setLastPrefetchDate:(id)arg1;
-(NSDate *)lastOnDemandDownloadDate;
-(NSDate *)prunedAt;
-(void)setPrunedAt:(id)arg1;

@end

