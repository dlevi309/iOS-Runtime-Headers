/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource {

	short _remoteAvailability;
	short _cloudLocalState;
	short _prefetchCount;
	unsigned long long _cplType;
	unsigned long long _sourceCplType;
	NSDate* _masterDateCreated;
	NSDate* _lastOnDemandDownloadDate;
	NSDate* _lastPrefetchDate;
	NSDate* _prunedAt;
	NSString* _fingerprint;

}

@property (assign,nonatomic) short cloudLocalState;                          //@synthesize cloudLocalState=_cloudLocalState - In the implementation block
@property (nonatomic,retain) NSDate * masterDateCreated;                     //@synthesize masterDateCreated=_masterDateCreated - In the implementation block
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate;              //@synthesize lastOnDemandDownloadDate=_lastOnDemandDownloadDate - In the implementation block
@property (nonatomic,retain) NSDate * lastPrefetchDate;                      //@synthesize lastPrefetchDate=_lastPrefetchDate - In the implementation block
@property (assign,nonatomic) short prefetchCount;                            //@synthesize prefetchCount=_prefetchCount - In the implementation block
@property (nonatomic,retain) NSDate * prunedAt;                              //@synthesize prunedAt=_prunedAt - In the implementation block
@property (assign,nonatomic) unsigned long long cplType;                     //@synthesize cplType=_cplType - In the implementation block
@property (assign,nonatomic) unsigned long long sourceCplType;               //@synthesize sourceCplType=_sourceCplType - In the implementation block
@property (nonatomic,retain) NSString * fingerprint;                         //@synthesize fingerprint=_fingerprint - In the implementation block
@property (assign,nonatomic) short remoteAvailability;                       //@synthesize remoteAvailability=_remoteAvailability - In the implementation block
-(unsigned long long)cplType;
-(NSString *)fingerprint;
-(BOOL)isEqualToValidatedExternalResource:(id)arg1 ;
-(NSDate *)masterDateCreated;
-(unsigned long long)cplTypeWithAssetID:(id)arg1 ;
-(void)setFingerprint:(NSString *)arg1 ;
-(void)setRemoteAvailability:(short)arg1 ;
-(void)setCplType:(unsigned long long)arg1 ;
-(short)remoteAvailability;
-(void)setSourceCplType:(unsigned long long)arg1 ;
-(NSDate *)lastOnDemandDownloadDate;
-(void)setPrefetchCount:(short)arg1 ;
-(unsigned long long)sourceCplType;
-(void)setCloudLocalState:(short)arg1 ;
-(NSDate *)lastPrefetchDate;
-(void)setLastPrefetchDate:(NSDate *)arg1 ;
-(id)initWithInternalResource:(id)arg1 ;
-(void)setPrunedAt:(NSDate *)arg1 ;
-(void)setLastOnDemandDownloadDate:(NSDate *)arg1 ;
-(NSDate *)prunedAt;
-(short)cloudLocalState;
-(void)setMasterDateCreated:(NSDate *)arg1 ;
-(id)initWithCloudResource:(id)arg1 ;
-(short)prefetchCount;
@end

