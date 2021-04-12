/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCloudLocalState:(short)arg1 ;
-(short)cloudLocalState;
-(void)setRemoteAvailability:(short)arg1 ;
-(short)remoteAvailability;
-(unsigned long long)cplTypeWithAssetID:(id)arg1 ;
-(void)setFingerprint:(NSString *)arg1 ;
-(void)setMasterDateCreated:(NSDate *)arg1 ;
-(id)initWithCloudResource:(id)arg1 ;
-(NSString *)fingerprint;
-(void)setCplType:(unsigned long long)arg1 ;
-(BOOL)isEqualToValidatedExternalResource:(id)arg1 ;
-(id)initWithInternalResource:(id)arg1 ;
-(void)setLastOnDemandDownloadDate:(NSDate *)arg1 ;
-(unsigned long long)sourceCplType;
-(short)prefetchCount;
-(void)setPrefetchCount:(short)arg1 ;
-(NSDate *)lastPrefetchDate;
-(void)setLastPrefetchDate:(NSDate *)arg1 ;
-(NSDate *)lastOnDemandDownloadDate;
-(NSDate *)prunedAt;
-(void)setPrunedAt:(NSDate *)arg1 ;
-(void)setSourceCplType:(unsigned long long)arg1 ;
-(NSDate *)masterDateCreated;
@end

